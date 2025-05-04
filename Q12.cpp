
// 12. Add the number 6 to the end of the array arr = [1, 2, 3, 4, 5] and print the updated array. Output:[1,2,3,4,5,6]

#include <iostream>
#include <vector>
using namespace std;

void addElementToEnd(vector<int>& nums, int newElement) {
    nums.push_back(newElement);
    cout << "Updated array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int newElement = 6;
    addElementToEnd(nums, newElement);
    return 0;
}

