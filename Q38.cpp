
// 37. Given a sorted array and a target value, return the starting and ending position of that target in the array.Example:Input: [5, 7, 7, 8, 8, 10], target=8 ,Output: [3, 4]

#include <iostream>
using namespace std;

void searchRange(int arr[], int size, int target) {
    int start = -1, end = -1;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            if (start == -1) {
                start = i;
            }
            end = i;
        }
    }
    
    if (start == -1) {
        cout << "[-1, -1]" << endl;
    } else {
        cout << "[" << start << ", " << end << "]" << endl;
    }
}

int main() {
    int arr[] = {5, 7, 7, 8, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 8;
    
    searchRange(arr, size, target);
    return 0;
}

//
#include <iostream>
using namespace std;

int findFirst(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int findLast(int arr[], int size, int target) {
    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

void searchRange(int arr[], int size, int target) {
    int first = findFirst(arr, size, target);
    if (first == -1) {
        cout << "[-1, -1]" << endl;
        return;
    }
    int last = findLast(arr, size, target);
    cout << "[" << first << ", " << last << "]" << endl;
}

int main() {
    int arr[] = {5, 7, 7, 8, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 8;
    
    searchRange(arr, size, target);
    return 0;
}

//
#include <iostream>
using namespace std;

int findLeft(int arr[], int size, int target) {
    int left = 0, right = size - 1, result = -1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            result = mid;
            right = mid - 1;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return result;
}

int findRight(int arr[], int size, int target) {
    int left = 0, right = size - 1, result = -1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            result = mid;
            left = mid + 1;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return result;
}

void searchRange(int arr[], int size, int target) {
    int first = findLeft(arr, size, target);
    if (first == -1) {
        cout << "[-1, -1]" << endl;
        return;
    }
    int last = findRight(arr, size, target);
    cout << "[" << first << ", " << last << "]" << endl;
}

int main() {
    int arr[] = {5, 7, 7, 8, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 8;
    
    searchRange(arr, size, target);
    return 0;
}
