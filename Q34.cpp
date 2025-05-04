
// 33. Write a program that takes a year as input and checks whether it is a century year (a year divisible by 100).

#include <iostream>
using namespace std;

void isCenturyYear(int year) {
    if (year % 100 == 0 ) {
        cout << year << " is a Century Year." << endl;
    } else {
        cout << year << " is not a Century Year." << endl;
    }
}

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    isCenturyYear(year);

    return 0;
}

//
#include <iostream>  
using namespace std;

void isCenturyYear(int year) {
    (year % 100 == 0) ? cout << year << " is a Century Year." << endl 
                      : cout << year << " is not a Century Year." << endl;
}

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    isCenturyYear(year);
    return 0;
}

//
#include <iostream>  
using namespace std;

void isCenturyYear(int year) {
    (year % 100 == 0) && cout << year << " is a Century Year." << endl;
    (year % 100 != 0) && cout << year << " is not a Century Year." << endl;
}

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    isCenturyYear(year);
    return 0;
}

//

#include <iostream>  
using namespace std;

void isCenturyYear(int year) {
    switch (year % 100 == 0) {
        case 1:
            cout << year << " is a Century Year." << endl;
            break;
        case 0:
            cout << year << " is not a Century Year." << endl;
            break;
    }
}

int main() {
    int year;  
    cout << "Enter a year: ";  
    cin >> year;  

    isCenturyYear(year);  
    return 0;  
}
