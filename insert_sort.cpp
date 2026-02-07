#include <iostream>
#include <algorithm>

const int MAIN_SIZE = 100;

void input(int *array, int size) {
    for(int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }
}

void output(int *array, int size) {
    for(int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << "\n";
}

bool checker(int *array, int size) {
    for(int i = 0; i < size - 1; +i) {
        if(array[i] > array[i + 1]) {
            return false;
        }
    }
    return true;
}

void insertSort(int *array, int size) {
    for(int i = 1; i < size; ++i) {
        int j = i;
        if(j && array[j] < array[j - 1]) {
            while (j && array[j] < array[j - 1]) {
                std::swap(array[j], array[j - 1]);
                --j;
            }
            output(array, size); 
        }
    }
}

int main(){
    int mainArray[MAIN_SIZE], size;
    std::cin >> size;
    input(mainArray, size);
    if(!checker(mainArray, size)) {
        insertSort(mainArray, size);
    }

    return 0;
}