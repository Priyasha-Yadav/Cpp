
// 30. Write a program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately. Example : Input: n = 132456, Output: 12, 9

#include <iostream>
using namespace std;

void sumEvenOddDigits(int n) {
    int evenSum = 0, oddSum = 0;
    
    while (n > 0) {
        int digit = n % 10;
        
        if (digit % 2 == 0) {
            evenSum += digit;
        } else {
            oddSum += digit;
        }
        
        n /= 10;
    }
    
    cout << "Sum of even digits: " << evenSum << endl;
    cout << "Sum of odd digits: " << oddSum << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    sumEvenOddDigits(n);
    
    return 0;
}
