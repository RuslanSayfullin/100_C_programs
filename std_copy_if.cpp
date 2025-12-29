#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> foo = {25, 15, 5, -5, -15};
    std::vector<int> bar (foo.size());

    // copy omly positive numbers:
    auto it = std::copy_if (foo.begin(), foo.end(), bar.begin(), [](int i){return !(i<0);});
    bar.resize(std::distance(bar.begin(), it)); // shrink container to new size

    std::cout << "bar contains: ";
    for (int& x: bar) std::cout << ' ' << x;
    std::cout << '\n';

    return 0;
}