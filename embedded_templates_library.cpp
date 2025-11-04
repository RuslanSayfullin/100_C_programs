#include <iostream>
#include <etl/vector.h>

int main() {
    // 1. загрузить данные из файла в вектор
    etl::vector<int> data;
    std::ifstream file("ata.txt");

    if (file.is_open()){
        int value;
        while(file >> value) {
            data.push_back(value);
        }
        file.close();
    } else{
        std::cerr << "Ошибка открытия файла data.txt" << std::endl;
        return 1;
    }

    // 2. Вычислить сумму элементов вектора
    int sum =0;
    for (int value : data) {
        sum += value;
    }

    // Вывести результат
    std::cout << "Сумма элементов вектора: " << sum << std::endl;

    return 0;
}