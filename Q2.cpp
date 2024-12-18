
//2. Write a function to determine whether a given number is positive, negative, or zero.

#include<iostream>
using namespace std;

int checkNumber(int num){
    if(num > 0){
        cout<<"Positive"<<endl;

    }
    else if(num < 0) {
        cout <<"Negative" << endl;
    }
    else{
        cout<<"Zero";
    }
    return 0;

}

int main(){

    int num;
    cout <<"Enter the Number: ";
    cin >> num;
    checkNumber(num);


    return 0;

}