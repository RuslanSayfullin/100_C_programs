#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Инициализирующий класс
    int ar[6] ={1, 2, 3, 4, 5, 6};

    // Проверка, нет ли отрицательного элемента
    none_of(ar, ar+6, [](int x){return x<0;})?
        cout << "No negative elements" :
        cout << "There arenegative elements";

    return 0;
}