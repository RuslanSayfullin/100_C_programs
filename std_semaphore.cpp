#include <iostream>
#include <semaphore.h>
#include <thread>

int main() {
    // Создаём семафор с начальным значением 1
    std::semaphore semaphore(1);

    // Создаём два потока
    std::thread thread1([&](){
        // Поток 1 получает доступ к ресурсу
        semaphore.acquire();

        // ...

        // Поток 1 освобождает ресурс
        semaphore.release();
    });

    std::thread thread2([&]() {
        // Поток 2 получает доступ к ресурсу
        semaphore.acquire();

        // ...

        // Поток 2 освобождает ресурс
        semaphore.release();
    });

    //  Ждём завершения потоков
    thread1.join();
    thread2.join();

    return 0;
}