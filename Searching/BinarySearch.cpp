#include<bits/stdc++.h>
using namespace std;

template<typename T>
int BinarySearch(T Arr[], int left, int right, T data) {
    if(right >= left) {
        int mid = left + (right - left) / 2; // generating the midpoint of the array

        // if the elements is present at the middle
        if(Arr[mid] == data)
            return mid;

        // if the element is smaller than the mid
        // search through the left part
        if (Arr[mid] > data)
            return BinarySearch(Arr, left, mid - 1, data);
        
        // if the element is greater than the mid
        // search through the right part
        return BinarySearch(Arr, mid + 1, right, data);
    }
    return -1;
}

int main() {
    int arr[] = { 2, 4, 6, 7, 9, 40, 10};
    int data = 9;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = BinarySearch<int>(arr, 0, n - 1, data);

    (result == -1)
        ? cout << "Element Not Present is Array"
        : cout << "Element Found at Index " << result;
    
    return 0;
}