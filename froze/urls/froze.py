from django.urls import re_path
from froze.views.froze import index

urlpatterns = [
    re_path(r'^froze/new/$', index, name="new_froze_url"),
]
