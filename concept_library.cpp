#include <iostream>
#include <string>

// Определение концепта Comparable
template<typename T>
concept Comparable = requires(T a, T b) {
    a == b;
    a != b;
};

// Функция, использующая концепт в ограничении шаблона
template<Comparable T>
void compare_and_print(const T& a, const T& b) {
    std::cout << "Comparing two values:\n";
    std::cout << "a == b: " << (a == b ? "true" : "false") << "\n";
    std::cout << "a != b: " << (a != b ? "true" : "false") << "\n\n";
}

int main() {
    // Проверка концепта на этапе компиляции
    static_assert(Comparable<int>, "int is comparable");
    static_assert(!Comparable<std::string>, "std::string is not comparable");

    // Использование функции с типом int (удовлетворяет концепту)
    std::cout << "Testing with int:\n";
    compare_and_print(5, 5);
    compare_and_print(3, 7);

    // Попытка использовать std::string вызовет ошибку компиляции,
    // так как std::string не удовлетворяет концепту в текущей реализации
    /*
    std::cout << "Testing with std::string:\n";
    compare_and_print(std::string("hello"), std::string("world"));
    */

    return 0;
}