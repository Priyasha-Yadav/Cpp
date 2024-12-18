
// 9. Sort an Array in Ascending Order Example: Input: nums = [4,2,8,5,1]; Output: nums = [1,2,4,5,8].

#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){

for(int j = 0; j <= i; j++ ){
    if(arr[i]<arr[j]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j]=temp;
    }
}
    }
    for(int k=0; k < sizeof(arr)/sizeof(arr[0]); k++){
        cout<<arr[k]<<endl;
    }
    return 0;
}