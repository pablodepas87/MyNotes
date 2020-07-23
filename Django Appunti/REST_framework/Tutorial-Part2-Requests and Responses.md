# Tutorial-Part2-Requests and Responses

## Request

Il framework REST introduce l’oggetto `Request` che estende il normale `HttpRequest` . La funzionalità principale  dell’oggetto `Request` è il `request.data` che è simile `request.POST`, ma più utile per lavorare con le API Web.

```python
request.POST  # Only handles form data.  Only works for 'POST' method.
request.data  # Handles arbitrary data.  Works for 'POST', 'PUT' and 'PATCH' methods.
```

## Response

è un tipo `TemplateResponse`che accetta contenuto senza rendering

```python
return Response(data)  # Renders to content type as requested by the client.
```

## Codici di stato

Nel tutorial 1 abbiamo utilizzato i numeri come 201 , 404 per indicare gli stati delle richieste Http una scrittura migliore del codice prevedere l’utilizzo di define appositi che indicano i vari codici di stato da assegnare al parametro `status` come ad esempio `HTTP_400_BAD_REQUEST`  nelle nostre view delle api per fare ciò dobbiamo importare  `from rest_framework import status` nel nostro `views.py`

Andiamo poi  a riscrivere le nostre classi delle view utilizzando 2 wrapper messi a dispozione dal framework:

1. Il `@api_view`decoratore per lavorare con viste basate sulle funzioni.
2. La classe `APIView` per lavorare con viste basate sulla classe.

Questi wrapper offrono alcune funzionalità, ad esempio si assicurano di ricevere istanze `Request` nella vista e aggiungere contesto ai `Response` in modo da poter eseguire la negoziazione del contenuto.

I wrapper forniscono anche comportamenti come la restituzione di  request`405 Method Not Allowed` quando appropriato e la gestione di eventuali eccezioni di tipo `ParseError` che si verificano quando si accede a `request.data`con dati non validi.

le nostre api di GET e POST diventano quindi:

```python
from rest_framework import status
from rest_framework.decorators import api_view
from rest_framework.response import Response
from snippets.models import Snippet
from snippets.serializers import SnippetSerializer


@api_view(['GET', 'POST'])
def snippet_list(request):
    """
    List all code snippets, or create a new snippet.
    """
    if request.method == 'GET':
        snippets = Snippet.objects.all()
        serializer = SnippetSerializer(snippets, many=True)
        return Response(serializer.data)

    elif request.method == 'POST':
        serializer = SnippetSerializer(data=request.data)
        if serializer.is_valid():
            serializer.save()
            return Response(serializer.data, status=status.HTTP_201_CREATED)
        return Response(serializer.errors, status=status.HTTP_400_BAD_REQUEST)
```

mentre quelle per lavorare sul singolo oggetto quindi ‘GET’,’PUT’,’DELETE’ diventano:

```python
@api_view(['GET', 'PUT', 'DELETE'])
def snippet_detail(request, pk):
    """
    Retrieve, update or delete a code snippet.
    """
    try:
        snippet = Snippet.objects.get(pk=pk)
    except Snippet.DoesNotExist:
        return Response(status=status.HTTP_404_NOT_FOUND)

    if request.method == 'GET':
        serializer = SnippetSerializer(snippet)
        return Response(serializer.data)

    elif request.method == 'PUT':
        serializer = SnippetSerializer(snippet, data=request.data)
        if serializer.is_valid():
            serializer.save()
            return Response(serializer.data)
        return Response(serializer.errors, status=status.HTTP_400_BAD_REQUEST)

    elif request.method == 'DELETE':
        snippet.delete()
        return Response(status=status.HTTP_204_NO_CONTENT)
```

 Infine se volessimo utilizzare l’estione dei file nella richiesta quindi ad esempio .json dovremmo utilizzare i suffissi per fare ciò aggiungiamo il parametro `format=None` alle nostre 2 function:

```python
def snippet_list(request, format=None):
....
def snippet_detail(request, pk, format=None):
```

Ora aggiorniamo `snippets/urls.py`, per aggiungere i suffissi tramite `format_suffix_patterns`oltre agli URL  delle nostre api views.

```python
from django.urls import path
from rest_framework.urlpatterns import format_suffix_patterns
from snippets import views

urlpatterns = [
    path('snippets/', views.snippet_list),
    path('snippets/<int:pk>', views.snippet_detail),
]

urlpatterns = format_suffix_patterns(urlpatterns)
```