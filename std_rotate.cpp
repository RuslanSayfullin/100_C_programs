#include <iostream>
#include<algorithm>
#include <vector>

int main() {
    std::vector<int> myvector;

    // set some values:
    for(int i=1; i<10; ++i) myvector.push_back(i);  // 1 2 3 4 5 6 7 8 9

    std::rotate(myvector.begin(), myvector.begin()+3, myvector.end());

    // print out content:
    std::cout << "myvector contains: ";
    for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}