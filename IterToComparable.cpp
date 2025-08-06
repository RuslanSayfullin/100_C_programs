#include <iostream>
#include <concepts>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> vec{1, 5, 2, 4, 3};

    auto result = std::min_element(vec.begin(), vec.end());

    if constexpr (std::iter_to_comparable<decltype(vec.begin())>) {
        std::cout << "Минимальеый элемент: " << *result << std::endl;
    } else {
        std::cout << "Элементы невозможно сравнить " << std::endl;
    }
    return 0;
}