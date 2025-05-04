// 26. Write a program to check if a string ends with a specific character.Example: Input: ("codinggita", "a"), Output: true.

#include <iostream>
using namespace std;

bool checkChar(string str, char c) {
    if (str[str.size() - 1] == c) {
        return true;
    }
    return false;
}

bool checkChar1(string str, char c) {
    return !str.empty() && str.back() == c;
}


int main() {
    string str = "codinggita";
    if (checkChar(str, 'a')) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}

//

#include <iostream>
using namespace std;

bool endsWithBruteForce(string str, char ch) {
    if (str.length() == 0) {
        return false;
    }

    if (str[str.length() - 1] == ch) {
        return true;
    }
    return false;
}

int main() {
    string inputString = "codinggita";
    char targetChar = 'a';

    if (endsWithBruteForce(inputString, targetChar)) {
        cout << "Output: true" << endl;
    } else {
        cout << "Output: false" << endl;
    }

    return 0;
}

//

#include <iostream>
using namespace std;

bool endsWithEasy(string str, char ch) {
    return !str.empty() && str.back() == ch;
}

int main() {
    string inputString = "codinggita";
    char targetChar = 'a';

    if (endsWithEasy(inputString, targetChar)) {
        cout << "Output: true" << endl;
    } else {
        cout << "Output: false" << endl;
    }

    return 0;
}

//

#include <iostream>
using namespace std;

bool endsWithOptimal(string str, char ch) {
    return !str.empty() && str.back() == ch;
}

int main() {
    string inputString = "codinggita";
    char targetChar = 'a';

    cout << (endsWithOptimal(inputString, targetChar) ? "Output: true" : "Output: false") << endl;

    return 0;
}
