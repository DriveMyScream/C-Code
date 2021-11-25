#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0 or n==1){
        return n;
    } else{
        return n * factorial(n-1);
    }
}
int main(){
    int a;
    cout<<"Enter a Number: ";
    cin>>a;
    int result = factorial(a);
    cout<<"The Factorial Of Number is "<<result<<endl;

    return 0;
}
