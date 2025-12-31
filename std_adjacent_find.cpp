#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // ищем первую одинаковых элементов
    auto it = std::adjacent_find(numbers.begin(), numbers.end());

    if (it != numbers.end()) {
        std::cout << "певое совпадение " << *it << std::endl; 
    } else {
        std::cout << "совпадении не найдено" << std::endl;
    }

    return 0;
}