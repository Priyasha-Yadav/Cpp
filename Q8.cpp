
//8. Find the Average of an Array. Example: Input: arr=[1,2,3,4,5]; Output: 3

#include <iostream>
using namespace std;

void average(int arr[], int n){
      for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int average = sum / n;
    cout << "Average: " << average << endl;
}

int main() {
  int n;  
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];  

    cout << "Enter " << n << " elements: ";
  average(arr, n);

    return 0;
}
