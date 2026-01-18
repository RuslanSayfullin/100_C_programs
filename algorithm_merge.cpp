#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    // Initializing lst container
    vector<int> arr1 = { 1, 4, 6, 3, 2 };

    // initializing 2nd container
    vector<int> arr2 = { 6, 2, 5, 7, 1};

    // declaring resultamt containers
    vector<int> arr3(10);

    // sorting initial containers
    sort(arr1.begin(), arr2.end());
    sort(arr2.begin(), arr2.end());

    // using merge() to merge the initial containers
    merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), arr3.begin());

    // printing the resultant merged container
    cout << "The container after merging initial containers is: ";

    for (int i = 0; i<arr3.size(); i++)
        cout << arr3[i] << " ";

    return 0;
}