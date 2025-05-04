
// 25. Write a program to split a string into an array of words. Example: Input: inputString = "Hello world, welcome to JavaScript!";Output:'Hello', 'world', 'welcome', 'to', 'JavaScript'

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString); 
    stringstream ss(inputString);
    string word;
    vector<string> words;

    while (ss >> word) {
        words.push_back(word);
    }

    cout << "Words in the string: ";
    for (const string& w : words) {
        cout << "'" << w << "' ";
    }
    cout << endl;

    return 0;
}

#include <iostream>
#include <cstring>
using namespace std;

void splitManualArray(string str) {
    int start = 0;
    int length = str.length();

    for (int i = 0; i < length; i++) {
        if (str[i] == ' ' || ispunct(str[i])) {
            if (i > start) {
                cout << "'" << str.substr(start, i - start) << "', ";
            }
            start = i + 1;
        }
    }

    if (start < length) {
        cout << "'" << str.substr(start) << "'" << endl;
    }
}

int main() {
    string inputString = "Hello world, welcome to JavaScript!";
    cout << "Words (Manual Array Split): ";
    splitManualArray(inputString);
    return 0;
}
