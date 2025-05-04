
// 11. Remove duplicate elements from the array arr = [1, 2, 2, 3, 4, 4, 5] and print the updated array.

#include <iostream>
#include <algorithm>  
using namespace std;

int removeDuplicate(int arr[], int size)
{
    if (size <= 1) return size;  

    sort(arr, arr + size);

    int newIndex = 1; 
    for (int i = 1; i < size; i++) {
        if (arr[i] != arr[i - 1]) {
            arr[newIndex] = arr[i];
            newIndex++;
        }
    }

    return newIndex;
}

int main()
{
    int arr[] = {1, 2, 3, 2, 2, 3, 4, 5, 6, 8, 8, 0, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    size = removeDuplicate(arr, size);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
