#include <iostream>
#include <algorithm>
#include <array>

int main() {
    std::array<int, 4> foo {2,4,1,3};
    std::array<int,4>::iterator it;

    do {
        // try a new permutation:
        std::prev_permutation(foo.begin(), foo.end());

        // print range:
        std::cout << "foo: ";

        for (int& x:foo) std::cout << ' ' << x;
        it=std::is_sorted_until(foo.begin(), foo.end());
        std::cout << " (" << (it-foo.begin()) << " element sorted)\n";
    } while (it!=foo.end());

        std::cout << "the range is sorted! \n";
        return 0;
}