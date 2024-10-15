from django.shortcuts import render

def index(request):
    return render(request, "clientes.html")

def emails(request):
    return render(request, "emails.html")
