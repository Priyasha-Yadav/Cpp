
// 14. Add Element to the Beginning of an Array Example: Input: nums = [1, 2, 3, 4]; Output: nums = [0,1,2,3,4].

#include <iostream>
using namespace std;

void addElementInBeginning(int arr[], int size, int newElement) {
    int updatedSize = size + 1;
    int updatedArr[updatedSize];

    updatedArr[0] = newElement;

    for (int i = 0; i < size; i++) {
        updatedArr[i + 1] = arr[i];
    }

    cout << "Updated array: ";
    for (int i = 0; i < updatedSize; i++) {
        cout << updatedArr[i] << " ";
    }
    cout << endl;
}

int main() {
    int nums[] = {1, 2, 3, 4};
    int size = sizeof(nums) / sizeof(nums[0]);
    int newElement = 0;

    addElementInBeginning(nums, size, newElement);

    return 0;
}

//
#include <iostream>
using namespace std;

void addElementToBeginning(int arr[], int& size, int newElement) {
    for (int i = size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = newElement;
    size++;

    cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int nums[10] = {1, 2, 3, 4};
    int size = 4;
    int newElement = 0;

    addElementToBeginning(nums, size, newElement);

    return 0;
}

//
#include <iostream>
#include <vector>
using namespace std;

void addElementToBeginning(vector<int>& nums, int newElement) {
    nums.insert(nums.begin(), newElement);

    cout << "Updated array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    int newElement = 0;

    addElementToBeginning(nums, newElement);

    return 0;
}
//
#include <iostream>
#include <deque>
using namespace std;

void addElementToBeginning(deque<int>& nums, int newElement) {
    nums.push_front(newElement);

    cout << "Updated array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    deque<int> nums = {1, 2, 3, 4};
    int newElement = 0;

    addElementToBeginning(nums, newElement);

    return 0;
}
