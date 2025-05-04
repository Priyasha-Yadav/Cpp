//31. Write a program to repeat a string a specified number of times.Example: Input: ("hello", 3), Output: "hellohellohello".

#include <iostream>
using namespace std;

string repeatString(string str, int n) {
    string result = "";
    for (int i = 0; i < n; i++) {
        result += str;
    }
    return result;
}

int main() {
    string str = "hello";
    int n;
    cout<<"Enter the string to repeat: ";
    cin>>str;
    cout<<"Enter the number of times to repeat: ";
    cin>>n;
    cout << "Repeated string: " << repeatString(str, n) << endl;

    return 0;
}



#include <iostream>
using namespace std;

string repeatStringOptimized(string str, int n) {
    string result = "";
    result = string(n, str[0]);
    return result;
}

int main() {
    string str;
    int n;
    
    cout << "Enter the string: ";
    cin >> str;
    
    cout << "Enter the number of repetitions: ";
    cin >> n;
    
    cout << "Repeated String: " << repeatStringOptimized(str, n) << endl;
    
    return 0;
}



#include <iostream>
#include <sstream>
using namespace std;

string repeatTheString(const string& str, int n) {
    stringstream ss;
    for (int i = 0; i < n; ++i) {
        ss << str;
    }
    return ss.str();
}
// data member and member function

int main() {
    string str;
    int n;

    cout << "Enter the string: ";
    cin >> str;
    
    cout << "Enter the number of repetitions: ";
    cin >> n;

    cout << "Repeated String: " << repeatTheString(str, n) << endl;

    return 0;
}
