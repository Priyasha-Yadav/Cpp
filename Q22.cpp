
// 22. Write a program to find the length of a given string.Example:Input:inputString = "Hello, World!"; Output:13;

#include <iostream>
using namespace std;

int findLengthManual(string str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {
    string inputString = "Hello, World!";
    cout << "Length (Brute Force): " << findLengthManual(inputString) << endl;
    return 0;
}

//

#include <iostream>
using namespace std;

int findLengthMethod(string str) {
    return str.length(); 
}

int main() {
    string inputString = "Hello, World!";
    cout << "Length (Using length()): " << findLengthMethod(inputString) << endl;
    return 0;
}

//

#include <iostream>
using namespace std;

int findLengthPointer(string str) {
    const char* ptr = str.c_str();
    int count = 0;
    while (*ptr != '\0') {
        count++;
        ptr++;
    }
    return count;
}

int main() {
    string inputString = "Hello, World!";
    cout << "Length (Using Pointer): " << findLengthPointer(inputString) << endl;
    return 0;
}

//

#include <iostream>
#include <iterator>
using namespace std;

int findLengthIterators(string str) {
    return distance(str.begin(), str.end());
}

int main() {
    string inputString = "Hello, World!";
    cout << "Length (Using Iterators): " << findLengthIterators(inputString) << endl;
    return 0;
}
