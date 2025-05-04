
// 15. Remove the Last element Input: nums = [1, 2, 3, 4,5]; Output: nums = [1,2,3,4].

#include <iostream>
#include <vector>
using namespace std;

void removeLast(vector<int>& nums) {
    nums.pop_back();
    cout << "Updated array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    removeLast(nums);
    return 0;
}


//
#include <iostream>
#include <vector>
using namespace std;

void removeLast(vector<int>& nums) {
    if (!nums.empty()) {
        nums.resize(nums.size() - 1);  
    }
    cout << "Updated array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    removeLast(nums);
    return 0;
}



#include <iostream>
#include <vector>
using namespace std;

void removeLast(vector<int>& nums) {
    if (!nums.empty()) {
        for (int i = 0; i < nums.size() - 1; ++i) {
            cout << nums[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    removeLast(nums);
    return 0;
}
