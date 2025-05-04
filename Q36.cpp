// 35. Print an inverted right-angled triangle pattern with n rows.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) { 
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

//
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << string(n - i, '*') << endl;
    }

    return 0;
}

//

#include <iostream>
using namespace std;

void printStars(int n, int i) {
    if (i == n) return;

    for (int j = 0; j < n - i; j++) {
        cout << "*";
    }

    cout << endl;

    printStars(n, i + 1);
}

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    printStars(n, 0);

    return 0;
}
