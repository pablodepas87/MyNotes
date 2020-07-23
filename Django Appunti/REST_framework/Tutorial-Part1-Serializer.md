# Serializer

Quando lavoriamo con le API andiamo incontro all’incapsulamento dei dati che vengono spediti attraverso il protocollo http , in genere i formati sono quelli JSON o XML in questa parte viene affrontata la serializzazione dei dati in formato JSON.

Nel tutorial è stata creata un’appplicazione denominata Snippet

`python manage.py startapp snippets`

dopodiche installata in `settings.py` con ance il framework REST

```python
INSTALLED_APPS = [
    ...
    'rest_framework',
    'snippets.apps.SnippetsConfig',
]
```

creiamo poi il modello dei dati denominato Snippet in `models.py` 

```python
from django.db import models

class Snippet(models.Model):
    created = models.DateTimeField(auto_now_add=True)
    title = models.CharField(max_length=100, blank=True, default='')
    code = models.TextField()
    linenos = models.BooleanField(default=False)
   
    class Meta:
        ordering = ['created']
```

i campi della tabella del database saranno ‘created’, ‘title’, ‘code’, ‘lineos’ . Definito il modello Snippet effettuiamo la migrazione sul db

```python
python manage.py makemigrations snippets
python manage.py migrate
```

Arriviamo al punto cruciale ovvero la serilizzazione dei dati per fare cio creiamo nella directory dell’app il file `serializer.py` che avrà il compito di serializzare e deserializzare le istanze di oggetti snippet(nel caso del tutorial)  rappresentati come `json`.

importiamo `from rest_framework import serializers` dopodiche creiamo   class `SnippetSerializer(serializers.Serializer)` in cui definiremo i campi del json che rappresentano i campi del model snippet(ovvero i campi della tabella sul database) e definendo i metodi create e update

```python
from rest_framework import serializers
from snippets.models import Snippet

class SnippetSerializer(serializers.Serializer):
    id = serializers.IntegerField(read_only=True)
    title = serializers.CharField(required=False, allow_blank=True, max_length=100)
    code = serializers.CharField(style={'base_template': 'textarea.html'})
    linenos = serializers.BooleanField(required=False)
  
    def create(self, validated_data):
        """
        Create and return a new `Snippet` instance, given the validated data.
        """
        return Snippet.objects.create(**validated_data)

    def update(self, instance, validated_data):
        """
        Update and return an existing `Snippet` instance, given the validated data.
        """
        instance.title = validated_data.get('title', instance.title)
        instance.code = validated_data.get('code', instance.code)
        instance.linenos = validated_data.get('linenos', instance.linenos)
        instance.save()
        return instance
```

Una classe serializzatore è molto simile a una `Form` di Django e include flag di convalida simili sui vari campi, come `required`, `max_length`e `default`.

I flag di campo possono anche controllare la modalità di visualizzazione  del serializzatore in determinate circostanze, ad esempio durante il  rendering  HTML. Ad esempio `{'base_template': 'textarea.html'} è equivalente all'utilizzo `widget=widgets.Textarea`su una `Form` di Django .

richiamando la shell possiamo fare qualche esperimento `python manage.py shell` ad esemipo per creare qualche instanza di snippet 

```
from snippets.models import Snippet
from snippets.serializers import SnippetSerializer
from rest_framework.renderers import JSONRenderer
from rest_framework.parsers import JSONParser

snippet = Snippet(code='foo = "bar"\n')
snippet.save()

snippet = Snippet(code='print("hello, world")\n')
snippet.save()
```

per serializzare uno di questi oggetti :

```python
serializer = SnippetSerializer(snippet)
serializer.data
# {'id': 2, 'title': '', 'code': 'print("hello, world")\n', 'linenos': False, }
```

Per finalizzare il processo di serializzazione, eseguiamo il rendering dei dati `json`.

```python
content = JSONRenderer().render(serializer.data)
content
# b'{"id": 2, "title": "", "code": "print(\\"hello, world\\")\\n", "linenos": false }'
```

La deserializzazione è simile. Per prima cosa analizziamo uno stream in tipi di dati nativi di Python ..

```python
import io

stream = io.BytesIO(content)
data = JSONParser().parse(stream)
```

quindi ripristiniamo quei tipi di dati nativi in un'istanza di oggetto snippet completamente popolata.

```python
serializer = SnippetSerializer(data=data)
serializer.is_valid()
# True
serializer.validated_data
# OrderedDict([('title', ''), ('code', 'print("hello, world")\n'), ('linenos', False), ('language', 'python'), ('style', 'friendly')])
serializer.save()
# <Snippet: Snippet object>
```

ovviemente questo è fatto tramite shell ma i vari metodi di una REST API sono scritti seguendo questa logica sui serializzatori. Un modo  che ci permette di scrivere il codice in maniera piu concisa è l’utilizzo di ModelsSerializers.

## ModelSerializers

La nostra classe `SnippetSerializer` scritta come abbiamo fatto per il momento ,sta replicando molte informazioni contenute anche nel modello `Snippet` procediamo quindi con un piccolo refactoring facendo eriditarea a SnippetSerializer la classe `serializer.ModelSerializer` diventa quindi cosi :

```python
class SnippetSerializer(serializers.ModelSerializer):
    class Meta:
        model = Snippet
        fields = ['id', 'title', 'code', 'linenos', 'language', 'style']
```

È importante ricordare che le classi di `ModelSerializer` non fanno nulla di particolarmente magico, sono semplicemente una scorciatoia per la creazione di classi serializers che prevedono la creazione di:

- Un set di campi determinato automaticamente.
- Semplici implementazioni predefinite per i metodi `create()`e `update()`.

se tramite shell eseguiamo il seguente codice :

```python
from snippets.serializers import SnippetSerializer
serializer = SnippetSerializer()
print(repr(serializer))
```

in output avremo :

```python
# SnippetSerializer():
#    id = IntegerField(label='ID', read_only=True)
#    title = CharField(allow_blank=True, max_length=100, required=False)
#    code = CharField(style={'base_template': 'textarea.html'})
#    linenos = BooleanField(required=False)

```

che non è altro la definizione scritta prima dell’utilizzo di `ModelSerializers`

## API VIEWS 

Procediamo ora con la scrittura delle views per le nostre api andiamo quindi in `snippets/views.py`  includendo i seguenti modelli:

```python
from django.http import HttpResponse, JsonResponse
from django.views.decorators.csrf import csrf_exempt
from rest_framework.parsers import JSONParser
from snippets.models import Snippet
from snippets.serializers import SnippetSerializer
```

dopodiche scriviamo la vista snippet_list che permetterà tramite il metodo di ‘GET’ di ottenere la lista di tutti gli oggetti della tabella e tramite il metodo ‘POST’ aggiungere uno o piu oggetti di tipo snippet al db.

```python
@csrf_exempt
def snippet_list(request):
    """
    List all code snippets, or create a new snippet.
    """
    if request.method == 'GET':
        snippets = Snippet.objects.all()
        serializer = SnippetSerializer(snippets, many=True)
        return JsonResponse(serializer.data, safe=False)

    elif request.method == 'POST':
        data = JSONParser().parse(request)
        serializer = SnippetSerializer(data=data)
        if serializer.is_valid():
            serializer.save()
            return JsonResponse(serializer.data, status=201)
        return JsonResponse(serializer.errors, status=400)
```

in breve nel metodo ‘GET’  prendiamo tutti gli oggetti dal modello , li serializziamo con la nostra classe SnippetSerializer e restituiamo la risposta tramite JSonResponse dei dati appena serializzati

il metodo ‘POST’ deserializza i dati che arrivano in formato Json li serializza con SnippetSerializer verifica che siano validi e li salva sul db

Si noti che poiché vogliamo essere in grado di postare questa vista da  client che non dispongono di un token CSRF, è necessario contrassegnare  la vista come `csrf_exempt`

Definiamo poi la vista snippet_detail che ci permette tramite i metodi ‘GET’,’PUT’,’DELETE’ di operare sul singolo oggetto di tipo snippet

```python
@csrf_exempt
def snippet_detail(request, pk):
    """
    Retrieve, update or delete a code snippet.
    """
    try:
        snippet = Snippet.objects.get(pk=pk)
    except Snippet.DoesNotExist:
        return HttpResponse(status=404)

    if request.method == 'GET':
        serializer = SnippetSerializer(snippet)
        return JsonResponse(serializer.data)

    elif request.method == 'PUT':
        data = JSONParser().parse(request)
        serializer = SnippetSerializer(snippet, data=data)
        if serializer.is_valid():
            serializer.save()
            return JsonResponse(serializer.data)
        return JsonResponse(serializer.errors, status=400)

    elif request.method == 'DELETE':
        snippet.delete()
        return HttpResponse(status=204)
```

la prima cosa che facciamo è andare a recuperare l’oggetto su cui vogliamo lavorare e poi lo utilizzeromo a seconda del tipo di metodo.

Colleghiamo poi le viste nel nostro progetto 

```python
urlpatterns = [
    path('', include('snippets.urls')),
]
```

non prima di aver creato le urls in urls.py della nostra app

```python
from django.urls import path
from snippets import views

urlpatterns = [
    path('snippets/', views.snippet_list),
    path('snippets/<int:pk>/', views.snippet_detail),
]
```

possiamo testare ora le nostre api utilizzando sia postam oppure installando httpie con `pip install httpie`  e utilizzando la shell.

