
// Leetcode Problem: Check If a String Is a Prefix of Array (1961) 

#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isPrefixString(string s, vector<string>& words) {
    string concatenated = "";
    
    for (int i = 0; i < words.size(); i++) {
        concatenated += words[i];
        
        if (concatenated == s) {
            return true;
        }
        
        if (concatenated.size() > s.size()) {
            break;
        }
    }
    
    return false;
}

int main() {
    string s = "iloveleetcode";  
    vector<string> words = {"i", "love", "leetcode"};  
    
    if (isPrefixString(s, words)) {
        cout << "True: The string can be formed as a prefix of words." << endl;
    } else {
        cout << "False: The string cannot be formed as a prefix of words." << endl;
    }
    
    return 0;
}
