
// 39. Given a string, check if all brackets are closed properly. Example:Input: "{[()]}" Output: true

#include <iostream>
#include <string>
using namespace std;

bool areBracketsClosedProperly(string str) {
    int openCount = 0;
    int closeCount = 0;

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        
        if (ch == '(' || ch == '{' || ch == '[') {
            openCount++;
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            closeCount++;
        }

        if (closeCount > openCount) {
            return false;
        }
    }

    return openCount == closeCount;
}

int main() {
    string input = "{[()]}";
    cout << "Is the string properly closed? " << (areBracketsClosedProperly(input) ? "True" : "False") << endl;
    return 0;
}

//

#include <iostream>
#include <stack>
using namespace std;

bool areBracketsClosedProperly(string str) {
    stack<char> s;

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (s.empty()) {
                return false;
            }

            char top = s.top();
            s.pop();

            if ((ch == ')' && top != '(') || (ch == '}' && top != '{') || (ch == ']' && top != '[')) {
                return false;
            }
        }
    }

    return s.empty();
}

int main() {
    string input = "{[()]}";
    cout << "Is the string properly closed? " << (areBracketsClosedProperly(input) ? "True" : "False") << endl;
    return 0;
}

//

#include <iostream>
using namespace std;

bool areBracketsClosedProperly(string str) {
    int roundOpen = 0, roundClose = 0;
    int squareOpen = 0, squareClose = 0;
    int curlyOpen = 0, curlyClose = 0;

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];

        if (ch == '(') roundOpen++;
        else if (ch == ')') roundClose++;
        else if (ch == '[') squareOpen++;
        else if (ch == ']') squareClose++;
        else if (ch == '{') curlyOpen++;
        else if (ch == '}') curlyClose++;

        if (roundClose > roundOpen || squareClose > squareOpen || curlyClose > curlyOpen)
            return false;
    }

    return roundOpen == roundClose && squareOpen == squareClose && curlyOpen == curlyClose;
}

int main() {
    string input = "{[()]}";
    cout << "Is the string properly closed? " << (areBracketsClosedProperly(input) ? "True" : "False") << endl;
    return 0;
}

//

#include <iostream>
#include <stack>
using namespace std;

bool areBracketsClosedProperly(string str) {
    stack<char> s;

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (s.empty()) return false;

            char top = s.top();
            s.pop();

            if ((ch == ')' && top != '(') || (ch == '}' && top != '{') || (ch == ']' && top != '[')) {
                return false;
            }
        }
    }

    return s.empty();
}

int main() {
    string input = "{[()]}";
    cout << "Is the string properly closed? " << (areBracketsClosedProperly(input) ? "True" : "False") << endl;
    return 0;
}


//

#include <iostream>
#include <string>
using namespace std;

bool checkBrackets(string str, int idx, int openCount) {
    if (idx == str.length()) {
        return openCount == 0;
    }

    char ch = str[idx];
    if (ch == '(' || ch == '{' || ch == '[') {
        return checkBrackets(str, idx + 1, openCount + 1);
    }
    else if (ch == ')' || ch == '}' || ch == ']') {
        if (openCount == 0) {
            return false;
        }
        return checkBrackets(str, idx + 1, openCount - 1);
    }
    return checkBrackets(str, idx + 1, openCount);
}

bool areBracketsClosedProperly(string str) {
    return checkBrackets(str, 0, 0);
}

int main() {
    string input = "{[()]}";
    cout << "Is the string properly closed? " << (areBracketsClosedProperly(input) ? "True" : "False") << endl;
    return 0;
}


