
// 27. Write a program to extract the file extension from a given filename.Example: Input: "document.pdf", Output: "pdf".

#include <iostream>
#include <string>
using namespace std;

string getFileExtensionBruteForce(string filename) {
    int pos = filename.rfind('.');
    
    if (pos != string::npos && pos != 0) {
        return filename.substr(pos + 1);  
    }
    return "";  
}

int main() {
    string filename = "document.pdf";  

    cout << "File Extension (Brute Force): " << getFileExtensionBruteForce(filename) << endl;

    return 0;
}



#include <iostream>
#include <string>
using namespace std;

string getFileExtensionEasy(string filename) {
    size_t pos = filename.find_last_of('.');
    
    if (pos != string::npos && pos != 0) {
        return filename.substr(pos + 1);
    }
    return "";
}

int main() {
    string filename = "document.pdf";
    cout << "File Extension (Easy Approach): " << getFileExtensionEasy(filename) << endl;
    return 0;
}



#include <iostream>
#include <string>
using namespace std;

string getFileExtensionOptimal(string filename) {
    if (filename.empty() || filename.find('.') == string::npos) {
        return "";
    }

    size_t pos = filename.find_last_of('.');
    
    return filename.substr(pos + 1);
}

int main() {
    string filename = "document.pdf";
    cout << "File Extension (Optimal Approach): " << getFileExtensionOptimal(filename) << endl;
    return 0;
}
