#include<bits/stdc++.h>
using namespace std;

// Time Complexity for a Linear Search Algorithm is O(n)

/**
 * @param Arr The array containing the elements
 * @param number Number of elements in the array
 * @param data The number searched in the array
 * @return int 
 */
int LinearSearch(int Arr[], int number, int data) {
    for(int i = 0; i < number; i++)
        if(Arr[i] == data)
            return i;
        return -1;
}

// driver code
int main(void) {
    int arr[] = { 2, 3, 4, 10, 40 };
    int data = 10;
    int number = sizeof(arr) / sizeof(arr[0]);

    int result = LinearSearch(arr, number, data);

    (result == -1)
        ? cout << "Element not in the array"
        : cout << "Element found at index " << result;

    return 0;
}