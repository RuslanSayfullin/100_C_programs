#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Ищет четное число
    auto it = std::find_if(vec.begin(), vec.end(), [](int x) {
        return x % 2 == 0;
    });

    // Вывод результата
    if (it != vec.end()) {
        std::cout << "Found: " << *it << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }

    return 0;
}