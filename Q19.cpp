
//19. Check if the array arr = [1, 2, 3, 4, 5] is sorted in ascending order, and print true or false.

#include <iostream>
#include <algorithm>
using namespace std;

bool isSortedConcise(int arr[], int size) {
    return std::is_sorted(arr, arr + size);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    bool result = isSortedConcise(arr, size);
    cout << (result ? "True" : "False") << endl;

    return 0;
}

#include <iostream>
using namespace std;

bool isSortedBruteForce(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    bool result = isSortedBruteForce(arr, size);
    cout << (result ? "True" : "False") << endl;

    return 0;
}

#include <iostream>
using namespace std;

bool isSortedOptimized(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    bool result = isSortedOptimized(arr, size);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
