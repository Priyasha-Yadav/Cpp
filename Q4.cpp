
//4. Write a function to check whether a given character is a vowel or consonant.

#include<iostream>
using namespace std;

void checkAlphabet(char character){
    if(character == 'a' ||  character == 'e' || character == 'i' || character == 'o' || character == 'u'){
        cout<<"Vowel"<<endl;
    }
    else{
        cout<<"Consonant"<<endl;
    }
}

int main(){

char character;
cout<<"Enter the Character: ";
cin >> character;
checkAlphabet(character);

    return 0;

}