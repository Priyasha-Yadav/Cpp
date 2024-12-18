
// 7. Write a function that simulates a traffic light system. The function should take the current light color (red, yellow, green) as input and print the corresponding action:
// "red" → "Stop"
// "yellow" → "Slow down"
// "green" → "Go"

#include <iostream>
#include <string> 
using namespace std;

int main() {
    string light;
    cout << "Current Light: ";
    cin >> light;  

    if (light == "red") {
        cout << "Stop\n";
    }
    else if (light == "yellow") {
        cout << "Slow down\n";
    }
    else if (light == "green\n") {
        cout << "Go";
    }
    else {
        cout << "Invalid light color!";
    }

    return 0;
}
