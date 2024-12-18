
// 6. Write a function that checks if a username and password match predefined values. If the username is "admin" and the password is "1234", print "Login successful"; otherwise, print "Login failed."

#include <iostream>
#include <cstring>  
using namespace std;

bool checkLoginCredentials(string name, string pass) {
    if (name == "admin" && pass== "1234") {
        return true;  
    }
    else {
        return false; 
    }
}

int main(){

string name,pass;
    cout<<"Enter Username: ";
    cin>>name;
    cout<<"Enter Password: ";
    cin>>pass;

bool result = checkLoginCredentials(name, pass);
if(result){
    cout<<"Login Successful! \n";
}
else{
    cout<<"Login Failed! \n";
}

return 0;
}