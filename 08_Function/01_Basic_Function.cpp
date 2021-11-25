#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}
int main(){
    int num1, num2;
    cout<<"Enter a First Number: ";
    cin>>num1;
    cout<<"Enter a Second Number: ";
    cin>>num2;
    int result = sum(num1, num2);
    cout<<"The Sum Of Two Numbers is: "<<result;

    return 0;
}