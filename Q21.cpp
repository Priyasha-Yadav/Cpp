
// 21. Write a program to convert a given string to uppercase.Example: Input: "hello", Output: "HELLO".

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input); 
    
    for (int i = 0; i < input.length(); i++) {
        input[i] = toupper(input[i]);
    }

    cout << "Uppercase string: " << input << endl;
    return 0;
}


#include <iostream>
#include <algorithm>
#include <locale>
using namespace std;

string toUpperCaseLocale(string str) {
    locale loc;
    transform(str.begin(), str.end(), str.begin(), [&loc](char c) { return toupper(c, loc); });
    return str;
}

int main() {
    string input = "hello";
    cout << "Uppercase (Using locale): " << toUpperCaseLocale(input) << endl;
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

//
#include <iostream>
using namespace std;

string toUpperCaseASCII(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
    return str;
}

int main() {
    string input = "hello";
    cout << "Uppercase (Brute Force): " << toUpperCaseASCII(input) << endl;
    return 0;
}

#include <iostream>
#include <algorithm>
#include <locale>
using namespace std;

string toUpperCaseLocale(string str) {
    locale loc;
    transform(str.begin(), str.end(), str.begin(), [&loc](char c) { return toupper(c, loc); });
    return str;
}

int main() {
    string input = "hello";
    cout << "Uppercase (Using locale): " << toUpperCaseLocale(input) << endl;
    return 0;
}
