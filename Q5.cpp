
//5. Write a function that checks if a person is eligible to vote. The person is eligible if they are 18 years old or older.

#include<iostream>
using namespace std;
int checkAge(int age){
    if(age >= 18) {
        return true;

    }
    else if(age <18 )
{
    return false;
}
return 0;
}

int main(){
    int age;
    cout<<"Enter Your Age: ";
    cin>>age;
    bool result = checkAge(age);
    if(result){
        cout<<"Eligible"<<endl;

    }
    else{
        cout<<"Not Eligible" <<endl;
    }

    return 0;
}