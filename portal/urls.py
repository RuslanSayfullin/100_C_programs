from django.conf.urls.static import static
from django.contrib import admin
from django.urls import path, include, re_path
from django.views.generic import TemplateView

from portal import settings

urlpatterns = [
    path('admin/', admin.site.urls),
    re_path(r'^', include('froze.urls')),
]

if settings.DEBUG:
    import debug_toolbar
    urlpatterns = [
        path('__debug__/', include(debug_toolbar.urls)),
    ] + urlpatterns

    urlpatterns += static(settings.MEDIA_URL, document_root=settings.MEDIA_ROOT)

handler404 = TemplateView.as_view(template_name="portal/404.html")
handler403 = TemplateView.as_view(template_name="portal/403.html")
