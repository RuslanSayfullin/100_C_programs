#include <iostream>
#include <string>

int main() {
    std::string myString = "Hello, World!";

    // используем back() для получения ссылки на последний симавол
    char& lastChar = myString.back();

    // Выводим последний символ
    std::cout << "Last character: " << lastChar << std::endl;

    // Меняем последний символ
    lastChar = 'X';

    // Выводим измененную строку
    std::cout << "Modified string: " << myString << std::endl;

    return 0;
}