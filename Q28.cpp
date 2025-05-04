
// 28. Write a function that takes two numbers and prints the largest one.Example:Input:number1 = 10;, Number2= 20; Output:20;

#include <iostream>
using namespace std;


void printLargestNumber(int num1, int num2){
if(num1>num2){
    cout<<"The Larger Number is: " << num1 << endl;

}
else if(num1 == num2 ){
    cout<<"Both Numbers are Equal" << endl;
}

else{
    cout<<"The Larger Number is: " << num2 << endl;
}
}

int main(){
    int num1, num2;
    cout<<"Enter the First Number: ";
    cin>>num1;
    cout<<"Enter the Second Number: ";
    cin>>num2;
    printLargestNumber(num1, num2);
    return 0;
}



//
#include <iostream>
using namespace std;

void printLargestNumber(int num1, int num2){
    (num1>num2) ? cout<<"The Larger Number is: " << num1 << endl : (num1 == num2) ?
     cout<<"Both Numbers are Equal" << endl : cout<<"The Larger Number is: " << num2 << endl;
}


int main(){
    int num1, num2;
    cout<<"Enter the First Number: ";
    cin>>num1;
    cout<<"Enter the Second Number: ";
    cin>>num2;
    printLargestNumber(num1, num2);
    return 0;
}


//
#include <iostream>
#include <algorithm>
using namespace std;

void printLargestNumberMax(int number1, int number2) {
    cout << "The largest number is: " << max(number1, number2) << endl;
}

int main() {
    int number1 = 10;
    int number2 = 20;

    printLargestNumberMax(number1, number2);

    return 0;
}


int main(){
    int num1, num2;
    cout<<"Enter the First Number: ";
    cin>>num1;
    cout<<"Enter the Second Number: ";
    cin>>num2;
    printLargestNumber(num1, num2);
    return 0;
}
