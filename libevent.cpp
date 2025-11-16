#include <iostream>
#include <event2/event.h>
#include <event2/event_struct.h>
#include <stdio.h>

void event_cb(evutil_socket_t sock,short what, void *arg) {
    if (what & EV_READ) {
        // Обработать данные, полуяенные из сокета
    }
}

int main() {
    event_base *base = event_base_new();
    evutil_socket_t sock = socket(AF_INET, SOCK_STREAM, 0);
    struct event *ev = event_new(base, sock, EV_READ | EV_PERSIST, event_cb, NULL);
    event_add(ev, NULL);
    event_base_dispatch(base);
    return 0;
}