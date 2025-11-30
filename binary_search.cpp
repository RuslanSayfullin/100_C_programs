#include <iostream>

int binarySearch(int arr[], int left,int right,int x) {
    if(right >= left) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
            return mid;

        if(arr[mid] > x)
            return binarySearch(arr, left, mid - 1, x);
        return binarySearch(arr, mid + 1, right, x);
    }
    return -1;
}

int main(void) {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 23;

    int result = binarySearch(arr, 0, n-1, x);
    
    if (result == -1)
        std::cout << "Элемент не найден";
    else
        std::cout << "Элемент найден на позиции " << result;

    return 0;
}