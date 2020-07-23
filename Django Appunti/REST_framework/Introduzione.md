# REST API DJANGO REST FRAMEWORK

Per poter creare delle REST API troviamo il framework `django rest` la cui documentazione è raggiungibile [qui](https://www.django-rest-framework.org/) ed ecco alcuni motivi pr utilizzarlo:

- L' [API navigabile sul Web](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://restframework.herokuapp.com/&usg=ALkJrhgCv6ANCMI_Ei39t1diF87NmUxbzg) è un'enorme vittoria in termini di usabilità per i tuoi sviluppatori.
- [Criteri di autenticazione](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.django-rest-framework.org/api-guide/authentication/&usg=ALkJrhj4RW1JwOctO0B0wzaCKQKM5BUq9Q) inclusi i pacchetti per [OAuth1a](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.django-rest-framework.org/api-guide/authentication/&usg=ALkJrhj4RW1JwOctO0B0wzaCKQKM5BUq9Q#django-rest-framework-oauth) e [OAuth2](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.django-rest-framework.org/api-guide/authentication/&usg=ALkJrhj4RW1JwOctO0B0wzaCKQKM5BUq9Q#django-oauth-toolkit) .
- [Serializzazione](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.django-rest-framework.org/api-guide/serializers/&usg=ALkJrhj1i7AJy1ETU151ZUMCgQPeU0OZ0Q) che supporta origini dati [ORM](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.django-rest-framework.org/api-guide/serializers&usg=ALkJrhgd6N70hxLYQf8GocdDT27gF-tFpg#modelserializer) e [non ORM](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.django-rest-framework.org/api-guide/serializers&usg=ALkJrhgd6N70hxLYQf8GocdDT27gF-tFpg#serializers) .
- Personalizzabile fino in fondo - basta usare [vista basati su funzioni regolari](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.django-rest-framework.org/api-guide/views&usg=ALkJrhi8ulr9P7x-qS45mh7okkgzq9ac1A#function-based-views) , se non avete bisogno delle [più ](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.django-rest-framework.org/api-guide/generic-views/&usg=ALkJrhgxuonX_J8t413rXT3Wxu1yCIUtQA) [potenti ](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.django-rest-framework.org/api-guide/viewsets/&usg=ALkJrhjc7Aww-GKKwe2QT_OY0MyqC99JqQ) [caratteristiche](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.django-rest-framework.org/api-guide/routers/&usg=ALkJrhjDk6A7ImAnsaxQQzPYPlMlHRKFeg) .
- Utilizzato e considerato affidabile da società riconosciute a livello internazionale tra cui [Mozilla](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.mozilla.org/en-US/about/&usg=ALkJrhjWc9nSCXHUb8YRgfP6eLRliStfNg) , [Red Hat](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.redhat.com/&usg=ALkJrhhzxdOgtFNkmqR9S3aVuU3xHUOsow) , [Heroku](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.heroku.com/&usg=ALkJrhjRYmOeXk9sDGnxoWDXV2NrmSjPNg) ed [Eventbrite](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.eventbrite.co.uk/about/&usg=ALkJrhgX6kbrveLo0fa_lJVGHusMz4lzbg) .

Il framework REST richiede quanto segue:

- Python (3.5, 3.6, 3.7, 3.8)
- Django (1.11, 2.0, 2.1, 2.2, 3.0)

## installazione

Per installare Django rest lo scarichiamo innanzitutto:

```python
pip install djangorestframework
pip install markdown       # Markdown support for the browsable API.
pip install django-filter  # Filtering support
```

dopodiché aggiungiamo `'rest_framework'`alle  `INSTALLED_APPS` in `settings.py`

```python
INSTALLED_APPS = [
    ...
    'rest_framework',
]
```

Il framework mette a disposizione anche delle pagine per gestire le api, se vogliamo aggiungerle  in `urls.py`  scriviamo il codice sotto che aggiunge la pagina di login , che da per scontato che sia stato creato almeno un superuser per il nostro project , in caso contrario crearlo.

```python
urlpatterns = [
    ...
    url(r'^api-auth/', include('rest_framework.urls'))
]
```

Qualsiasi impostazione globale per un'API del framework REST viene mantenuta in  un singolo dizionario di configurazione denominato `REST_FRAMEWORK`. Inizia aggiungendo quanto segue al tuo `settings.py`modulo:

```python
REST_FRAMEWORK = {
    # Use Django's standard `django.contrib.auth` permissions,
    # or allow read-only access for unauthenticated users.
    'DEFAULT_PERMISSION_CLASSES': [
        'rest_framework.permissions.DjangoModelPermissionsOrAnonReadOnly'
    ]
}
```

se volessimo creare un api  di lettura / scrittura per accedere alle informazioni sugli utenti del nostro progetto. andiamo ad aggiungere al file urls.py le seguenti classi:

```python
from django.conf.urls import url, include
from django.contrib.auth.models import User
from rest_framework import routers, serializers, viewsets

# Serializers define the API representation.
class UserSerializer(serializers.HyperlinkedModelSerializer):
    class Meta:
        model = User
        fields = ['url', 'username', 'email', 'is_staff']

# ViewSets define the view behavior.
class UserViewSet(viewsets.ModelViewSet):
    queryset = User.objects.all()
    serializer_class = UserSerializer

# Routers provide an easy way of automatically determining the URL conf.
router = routers.DefaultRouter()
router.register(r'users', UserViewSet)

# Wire up our API using automatic URL routing.
# Additionally, we include login URLs for the browsable API.
urlpatterns = [
    url(r'^', include(router.urls)),
    url(r'^api-auth/', include('rest_framework.urls', namespace='rest_framework'))
]
```

