from django.urls import path
from . import views

urlpatterns = [
    path('', views.pagina_produtos),
    path('celulares/', views.pagina_celulares),
]