#include <iostream>
#include <libhv.h>

int main() {
    // Создаём событийный цикл
    uv_loop_t *loop = uv_loop_new();

    // Создаём TCP-сокет
    uv_tcp_t tcp;
    uv_tcp_init(loop, &tcp);

    // Связываем сокет с адресом и портом
    uv_tcp_bind(&tcp,uv_ip4_addr("0.0.0.0", 80));

    // Слушаем сокет
    uv_tcp_listen(&tcp, 10, on_new_connection);

    // Запускаем событийный цикл
    uv_run(loop, UV_RUN_DEFAULT);

    // Очищаем ресурсы
    uv_loop_delete(loop);

    return 0;
}

void on_new_connection(uv_stream_t *stream, intstatus){
    if (status < 0) {
        return;
    }

    // Принимает новое соединение
    uv_tcp_t *client = (uv_tcp_t *)stream;

    // ... Обрабатываем чоединение с клиентом
}