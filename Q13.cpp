
// 13. Check if the array arr = [1, 2, 3, 4, 5] contains the number 3 and print true or false.

#include <iostream>
using namespace std;

void containsNumber(int arr[], int size){
    for(int i = 0; i < size; i++){
        if(arr[i] == 3){
            cout<<"True\n";
            break;
        }

    }
}

int main(){
    int arr[]={1,2,3,4,5,7,8,9};
int size = sizeof(arr)/sizeof(arr[0]);
containsNumber(arr, size);
return 0;

}