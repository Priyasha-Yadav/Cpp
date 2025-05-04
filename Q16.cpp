
// 16. Check if all the elements in arr = [3, 5, 9, 1, 7] are positive numbers, and print true or false.

#include <iostream>
using namespace std;

bool checkPositive(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            return false;
        }
    }
    return true;
}

int main(){

int arr[] = {3, 5, 9, 1, 7};
  int size = sizeof(arr) / sizeof(arr[0]);

cout << (checkPositive(arr, size) ? "true" : "false") << endl;

 return 0;
 
}

//
#include <iostream>
using namespace std;

bool areAllPositiveBruteForce(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] <= 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {3, 5, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (areAllPositiveBruteForce(arr, size)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
//
#include <iostream>
using namespace std;

bool areAllPositiveEasy(int arr[], int size) {
    bool allPositive = true;

    for (int i = 0; i < size; i++) {
        if (arr[i] <= 0) {
            allPositive = false;
            break;
        }
    }

    return allPositive;
}

int main() {
    int arr[] = {3, 5, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (areAllPositiveEasy(arr, size)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
//
#include <iostream>
using namespace std;

bool isNonPositive(int num) {
    return num <= 0;
}

bool areAllPositiveModerate(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (isNonPositive(arr[i])) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {3, 5, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (areAllPositiveModerate(arr, size)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}

//
#include <iostream>
using namespace std;

bool areAllPositiveOptimal(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (!(arr[i] > 0)) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {3, 5, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (areAllPositiveOptimal(arr, size)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
