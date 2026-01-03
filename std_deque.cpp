#include <iostream>
#include <deque>

int main() {
    std::deque<int> data = {10, 20, 30, 40, 50};

    // доступ к элементам через тндексацию
    for (size_t i=0; i < data.size(); ++i) {
        std::cout << "Element " << i << ": " << data[i] << std::endl;
    }

    return 0;
}