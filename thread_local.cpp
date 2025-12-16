#include <iostream>
#include <thread>

thread_local int x = 0;

void increment() {
    ++x;
    std::cout << "x = " << x <<std::endl;
}

int main() {
    std::thread t1(increment);
    std::thread t2(increment);

    t1.join();
    t2.join();

    return 0;
}