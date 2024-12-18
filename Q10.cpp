
// 10. Given an array of integers, count how many numbers are even and how many are odd.
// Example:
// Input: [1, 2, 3, 4, 5]
// Output: Even: 2, Odd: 3

#include <iostream>
using namespace std;

void countEvenOdd(int arr[], int size) {
    int countEven = 0, countOdd = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            countEven++;
        } else {
            countOdd++;
        }
    }
    
    cout << "Even: " << countEven << ", Odd: " << countOdd << endl;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    
    countEvenOdd(arr, sizeof(arr) / sizeof(arr[0]));
    
    return 0;
}
