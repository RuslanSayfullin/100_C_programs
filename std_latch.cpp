#include <iostream>
#include <latch>
#include <thread>

void task(std::latch& sync_point, int id) {
    std::cout << "Поток " << id << " начал  работу\n"
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Поток " << id << " завершает работу\n";
    sync_point.count_down();    // Уменьшаем счетчик
}

int main() {
    std::latch sync_point(1);

    std::thread t1(task, std::ref(sync_point), 1);
    std::thread t2(task, std::ref(sync_point), 2);

    sync_point.wait();  // Ожидание, пока оба потока не завершат работу

    t1.join();
    t2.join();

    return 0;
}