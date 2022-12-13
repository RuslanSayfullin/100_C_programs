from django.http import HttpResponse
from django.views import generic


def index(request):
    return HttpResponse("Страница CRM.")
