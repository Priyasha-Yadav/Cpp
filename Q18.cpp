
// 18. Print all elements that are at even indexes in the array arr = [10, 20, 30, 40, 50]. Output:[10,30,50]

#include <iostream>
using namespace std;

void printEvenIndexBruteForce(int arr[], int size) {
    cout << "[";
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            cout << arr[i];
            if (i < size - 2) {
                cout << ", ";
            }
        }
    }
    cout << "]" << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    printEvenIndexBruteForce(arr, size);
    return 0;
}

//

#include <iostream>
using namespace std;

void printEvenIndexModerate(int arr[], int size) {
    cout << "[";
    for (int i = 0; i < size; i += 2) {
        cout << arr[i];
        if (i < size - 2) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    printEvenIndexModerate(arr, size);
    return 0;
}

//
#include <iostream>
using namespace std;

void printEvenIndexRecursive(int arr[], int size, int index = 0) {
    if (index >= size) {
        return;
    }
    cout << arr[index];
    if (index + 2 < size) {
        cout << ", ";
    }
    printEvenIndexRecursive(arr, size, index + 2);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "[";
    printEvenIndexRecursive(arr, size);
    cout << "]" << endl;
    return 0;
}

//

#include <iostream>
using namespace std;

void printEvenIndexWithTempArray(int arr[], int size) {
    int temp[size];
    int tempIndex = 0;

    for (int i = 0; i < size; i += 2) {
        temp[tempIndex++] = arr[i];
    }

    cout << "[";
    for (int i = 0; i < tempIndex; i++) {
        cout << temp[i];
        if (i < tempIndex - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    printEvenIndexWithTempArray(arr, size);
    return 0;
}
