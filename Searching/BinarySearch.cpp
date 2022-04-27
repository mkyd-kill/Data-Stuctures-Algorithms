#include<bits/stdc++.h>
using namespace std;

/**
 * @brief Binary Search for an integer, a character or a string array values
 * 
 * @tparam T T-value for the templating (like generics in Java)
 * @param Arr Array either a string or an integer
 * @param left 
 * @param right 
 * @param data Value to be searched in the array
 * @return int 
 */

template<typename T>
int BinarySearch(T Arr[], int left, int right, T data) {
    if(left <= right) {
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
    char arr[] = { 'A', 'B', 'C', 'D', 'E', 'F'}; // can be either a of string, character or an integer values
    char data = 'E'; // can be either a of string, character or an integer values
    int n = sizeof(arr) / sizeof(arr[0]); // getting the size of the array

    int result = BinarySearch<char>(arr, 0, n - 1, data);

    (result == -1)
        ? cout << "Element Not Present is Array"
        : cout << "Element Found at Index " << result;
    
    return 0;
}