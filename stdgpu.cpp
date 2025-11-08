#include <iostream>
#include <stdgpu/vector.h>

int main() {
    stdgpu::vector<int> v(1000000);
    // ... инициализация v

    int sum =0;
    for (int i = 0; i < v.size(); ++i) {
        sum += v[i];
    }

    std::cout << "Сумма: " << sum << std::endl;

    return 0;
}