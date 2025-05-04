
// 23. Write a program to concatenate two given strings. Example: Input: ("hello", " world"), Output: "hello world".

#include <iostream>
using namespace std;

string concatenateManual(string str1, string str2) {
    for (int i = 0; i < str2.length(); i++) {
        str1 += str2[i];
    }
    return str1;
}

int main() {
    string str1 = "hello";
    string str2 = " world";
    cout << "Concatenated String (Brute Force): " << concatenateManual(str1, str2) << endl;
    return 0;
}

//

#include <iostream>
using namespace std;

string concatenateWithPlus(string str1, string str2) {
    return str1 + str2;
}

int main() {
    string str1 = "hello";
    string str2 = " world";
    cout << "Concatenated String (Using +): " << concatenateWithPlus(str1, str2) << endl;
    return 0;
}

//

#include <iostream>
using namespace std;

string concatenateWithAppend(string str1, string str2) {
    str1.append(str2);
    return str1;
}

int main() {
    string str1 = "hello";
    string str2 = " world";
    cout << "Concatenated String (Using append()): " << concatenateWithAppend(str1, str2) << endl;
    return 0;
}

//

#include <iostream>
#include <cstring>
using namespace std;

void concatenateWithStrcat(char* str1, const char* str2) {
    strcat(str1, str2);
}

int main() {
    char str1[50] = "hello";
    const char* str2 = " world";
    concatenateWithStrcat(str1, str2);
    cout << "Concatenated String (Using strcat()): " << str1 << endl;
    return 0;
}
