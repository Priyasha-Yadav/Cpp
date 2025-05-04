
// 24. Write a program to remove whitespace from both ends of a string. Example: Input: " hello ", Output: "hello".


#include <iostream>
#include <cctype>
using namespace std;

string trimManual(string str) {
    int start = 0, end = str.length() - 1;

    while (start <= end && isspace(str[start])) {
        start++;
    }

    while (end >= start && isspace(str[end])) {
        end--;
    }

    return str.substr(start, end - start + 1);
}

int main() {
    string input = "   hello   ";
    cout << "Trimmed String (Manual): \"" << trimManual(input) << "\"" << endl;
    return 0;
}

//
#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

string trimUsingErase(string str) {
    str.erase(str.begin(), find_if(str.begin(), str.end(), [](unsigned char ch) { return !isspace(ch); }));
    str.erase(find_if(str.rbegin(), str.rend(), [](unsigned char ch) { return !isspace(ch); }).base(), str.end());
    return str;
}

int main() {
    string input = "   hello   ";
    cout << "Trimmed String (Using erase()): \"" << trimUsingErase(input) << "\"" << endl;
    return 0;
}

//
#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

string trimUsingSTL(string str) {
    auto start = find_if_not(str.begin(), str.end(), [](unsigned char ch) { return isspace(ch); });
    auto end = find_if_not(str.rbegin(), str.rend(), [](unsigned char ch) { return isspace(ch); }).base();
    return (start < end ? string(start, end) : "");
}

int main() {
    string input = "   hello   ";
    cout << "Trimmed String (Using STL): \"" << trimUsingSTL(input) << "\"" << endl;
    return 0;
}
