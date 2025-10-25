#include <iostream>

int main() {
    // Обьявление переменных для хранения чисел и операции
    double num1, num2, result;
    char operation;

    // Ввод первого числа
    std::cout << "Input first number: ";
    std::cin >> num1;

    // Ввод второго числа
    std::cout << "Input second  number: ";
    std::cin >> num2;

    // Ввод операции
    std::cout << "Input operation (+, -, *, /): ";
    std::cin >> operation;

    // Выполнение операции в зависимости от введенной операции
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Проверка деления на ноль
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Zero divizion error!" << std::endl;
                return 1;
            }
            break;
        default:
            std::cout << "Error! Wrong operation." << std::endl;
            return 1;   // Возвращаем ненулевой код ошибки
    }

    // Вывод результата
    std::cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << std::endl;

    return 0;   // Возврашщаем нулевой код, чтобы показать успешное выполнение программы
}