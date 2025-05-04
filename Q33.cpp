
// 32.Write a program that categorizes a person’s age group based on the given age:

#include <iostream>
using namespace std;

void categorizeAgeGroup(int age) {
    if (age < 13) {
        cout << "Child" << endl;
    }
    else if (age >= 13 && age <= 19) {
        cout << "Teenager" << endl;
    }
    else if (age >= 20 && age <= 59) {
        cout << "Adult" << endl;
    }
    else if (age >= 60) {
        cout << "Senior" << endl;
    }
    else {
        cout << "Invalid age" << endl;
    }
}

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;
    categorizeAgeGroup(age);
    return 0;
}

#include <iostream>
using namespace std;
int ageCategory = -1;

void categorizeAgeGroup(int age){
    if (age < 13) {
    ageCategory = 0;
} 
else if (age >= 13 && age <= 19) {
    ageCategory = 1;
} 
else if (age >= 20 && age <= 59) {
    ageCategory = 2;
} 
else if (age >= 60) {
    ageCategory = 3;
}
else {
    ageCategory = -1;
}

switch(ageCategory) {
    case 0:
        cout << "Child" << endl;
        break;
    case 1:
        cout << "Teenager" << endl;
        break;
    case 2:
        cout << "Adult" << endl;
        break;
    case 3:
        cout << "Senior" << endl;
        break;
    default:
        cout << "Invalid age" << endl;
        break;
}

}

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;
    categorizeAgeGroup(age);
    return 0;
}


#include <iostream>
#include <string>

using namespace std;

string categorizesAgeGroup(int age) {
    return (age >= 0 && age <= 12) ? "Child" :
           (age >= 13 && age <= 19) ? "Teenager" :
           (age >= 20 && age <= 59) ? "Adult" :
           (age >= 60) ? "Senior" :
           "Invalid age";
}

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    string category = categorizesAgeGroup(age);
    cout << "The person is a " << category << "." << endl;

    return 0;
}
