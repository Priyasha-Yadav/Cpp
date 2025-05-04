
// 17. Count how many positive and negative numbers are in arr = [1, -2, 3, -4, 5, -6] and print the result.#include <iostream>

#include <iostream>
using namespace std;

void countPositiveNegativeBruteForce(int arr[], int size) {
    int positiveCount = 0;
    int negativeCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        }
    }

    cout << "Positive count: " << positiveCount << endl;
    cout << "Negative count: " << negativeCount << endl;
}

int main() {
    int arr[] = {1, -2, 3, -4, 5, -6};
    int size = sizeof(arr) / sizeof(arr[0]);

    countPositiveNegativeBruteForce(arr, size);

    return 0;
}

#include <iostream>
using namespace std;

void countPositiveNegativeOptimized(int arr[], int size) {
    int positiveCount = 0, negativeCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        }
    }

    cout << "Positive count: " << positiveCount << endl;
    cout << "Negative count: " << negativeCount << endl;
}

int main() {
    int arr[] = {1, -2, 3, -4, 5, -6};
    int size = sizeof(arr) / sizeof(arr[0]);

    countPositiveNegativeOptimized(arr, size);

    return 0;
}

//

#include <iostream>
using namespace std;

void countPositiveNegativeEasy(int arr[], int size) {
    int positiveCount = 0, negativeCount = 0;

    for (int i = 0; i < size; i++) {
        (arr[i] > 0) ? positiveCount++ : negativeCount++;
    }

    cout << "Positive count: " << positiveCount << endl;
    cout << "Negative count: " << negativeCount << endl;
}

int main() {
    int arr[] = {1, -2, 3, -4, 5, -6};
    int size = sizeof(arr) / sizeof(arr[0]);

    countPositiveNegativeEasy(arr, size);

    return 0;
}

//

#include <iostream>
using namespace std;

void countPositiveNegativeModerate(int arr[], int size) {
    int positiveCount = 0, negativeCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        }
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            negativeCount++;
        }
    }

    cout << "Positive count: " << positiveCount << endl;
    cout << "Negative count: " << negativeCount << endl;
}

int main() {
    int arr[] = {1, -2, 3, -4, 5, -6};
    int size = sizeof(arr) / sizeof(arr[0]);

    countPositiveNegativeModerate(arr, size);

    return 0;
}
