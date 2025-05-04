
// 29.Write a program to find all pairs in an array whose sum is equal to a given number.: Example 1: Input: nums = [2,7,11,15], target = 9 , Output: [0,1].

#include <iostream>
using namespace std;

void findPairsBruteForce(int nums[], int n, int target) {
    bool foundPair = false;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                cout << "[" << i << ", " << j << "]" << endl;
                foundPair = true;
            }
        }
    }

    if (!foundPair) {
        cout << "No pairs found!" << endl;
    }
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 9;

    cout << "Pairs with sum " << target << ":" << endl;
    findPairsBruteForce(nums, n, target);

    return 0;
}




#include <iostream>
using namespace std;

void findPairsHashMap(int nums[], int n, int target) {
    bool foundPair = false;
    bool seen[1000] = {false};

    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];

        if (complement >= 0 && complement < 1000 && seen[complement]) {
            cout << "[" << complement << ", " << nums[i] << "]" << endl;
            foundPair = true;
        }

        if (nums[i] >= 0 && nums[i] < 1000) {
            seen[nums[i]] = true;
        }
    }

    if (!foundPair) {
        cout << "No pairs found!" << endl;
    }
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 9;

    cout << "Pairs with sum " << target << ":" << endl;
    findPairsHashMap(nums, n, target);

    return 0;
}
