#include<iostream>
using namespace std;

// global Variable
/* This are a global variable so we can ascess anywhere form the program
   because this is not defined in any function */
int a = 100;
int b = 200;
void sum_of_numbers(){
    int sum = a + b;
    cout<<"\nThe Sum of two numbers is "<<sum;
}
int main(){
// Local Variable 
/* Both The Variables are different because their scope
 in a specific function  */
int a = 10;
int b = 20;
int sum = a + b;
cout<<"The Sum of two numbers is "<<sum;
sum_of_numbers();

    return 0;
}