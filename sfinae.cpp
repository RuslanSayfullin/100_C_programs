#include <iostream>
#include <type_traits>

template<typename T>
std::enable_if_t<std::is_integral_v<T>, void> print(T value) {
    std::cout << "Integer: " << value << std::endl;
}

template<typename T>
std::enable_if_t<std::is_floating_point_v<T>, void> print(T value) {
    std::cout << "Floating point: " << value << std::endl;
}

int main() {
    print(42);
    print(3.14);

    return 0;
}