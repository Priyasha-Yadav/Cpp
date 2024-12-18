
// 1. Write a function to check the grade of a student based on the score:
// 90-100: A
// 80-89: B
// 70-79: C
// 60-69: D
// Below 60: F

#include <iostream>
using namespace std;



int gradeChecker(){
int marks;
cout<<"Enter Marks: ";
cin>>marks;
if(marks<=100 && marks >=90){
  cout<<"A\n";
}
else if(marks<=89 && marks >=80){
  cout<<"B\n";
}
else if(marks<=79 && marks >=70){
  cout<<"C\n";


}else if(marks<=69 && marks >=60){
  cout<<"D\n";

}
else if(marks<60){
  cout<<"F\n";
}
return 0;
}


int main(){
    gradeChecker();
    return 0;
}