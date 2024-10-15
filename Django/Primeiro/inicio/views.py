from django.shortcuts import render

def index(request):
    content = {
        "name" : "Wesley",
        "Idade" : "20"
    }
    return render(request, "index.html", content)
