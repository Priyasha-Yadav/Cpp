
// 20. Find and print the difference between the maximum and minimum elements in arr = [80, 30, 70, 50, 20].

#include <iostream>
using namespace std;

int findDifferenceSingleLoop(int arr[], int size) {
    int maxElement = arr[0];
    int minElement = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }

    return maxElement - minElement;
}

int main() {
    int arr[] = {80, 30, 70, 50, 20};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Difference (Single Loop): " << findDifferenceSingleLoop(arr, size) << endl;
    return 0;
}


#include <iostream>
#include <algorithm>
using namespace std;

int findDifferenceBuiltIn(int arr[], int size) {
    int maxElement = *max_element(arr, arr + size);
    int minElement = *min_element(arr, arr + size);
    return maxElement - minElement;
}

int main() {
    int arr[] = {80, 30, 70, 50, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Difference (Built-in): " << findDifferenceBuiltIn(arr, size) << endl;
    return 0;
}

#include <iostream>
using namespace std;

int findDifferenceSingleLoop(int arr[], int size) {
    int maxElement = arr[0];
    int minElement = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }

    return maxElement - minElement;
}

int main() {
    int arr[] = {80, 30, 70, 50, 20};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Difference (Single Loop): " << findDifferenceSingleLoop(arr, size) << endl;
    return 0;
}
