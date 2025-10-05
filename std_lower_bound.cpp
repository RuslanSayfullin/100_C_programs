#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 3, 5, 7, 9};

    int num = 5;

    auto it = std::lower_bound(vec.begin(), vec.end(), num);

    std::cout << *it << std::endl;

    return 0;
}