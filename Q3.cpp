
// 3. Write a function that takes three sides of a triangle and checks whether the triangle is equilateral, isosceles, or scalene.

#include<iostream>
using namespace std;

void checkTriangle(int side1, int side2, int side3){
    if(side1==side2 && side2 == side3 && side3 == side1 ){
        cout<<"Equilateral Triangle" << endl;

    }
    else if(side1==side2 || side2 == side3 || side3 == side1 ) {
         cout<<"Isosceles Triangle" << endl;
    }
else{
    cout<<"Scalene Triangle"<<endl;
}
}
int main(){
    int side1, side2, side3;
    cout<<"Enter the First Side: ";
    cin >> side1;
    cout<<"Enter the Second Side: ";
    cin >> side2;
    cout<<"Enter the Third Side: ";
    cin >> side3;
    checkTriangle(side1,side2,side3);
return 0;

}