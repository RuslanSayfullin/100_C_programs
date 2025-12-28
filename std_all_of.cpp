#include <iostream>
#include <algorithm>    // for all_off()

using namespace std;

int main() {
    // инициализирующий массив
    int arr[6] = {1, 2, 3, 4, 5, -6};

    // Проверка, все ли элементы положительны
    all_of(arr, arr+6, [](int x) { return x>0; })?
        cout << "All are positive elements" :

        cout << "All are not positive elements";
    
    return 0;
}