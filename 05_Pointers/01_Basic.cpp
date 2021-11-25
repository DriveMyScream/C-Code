#include<iostream>
using namespace std;

int main(){
// Pointer: Pointer is a variable that stores the address of another variable
// & -- Address of Operator
// * -- Dereferance Operator

   int a = 10;
   int* b = &a;
   cout<<"The Address of a is "<<b<<endl;
   cout<<"The Address of a is "<<&a<<endl;
   cout<<endl;
   cout<<"The Value at address of a is "<<*b<<endl;
   cout<<"The Value at Address of a is "<<a<<endl;

    return 0;
}