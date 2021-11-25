#include<iostream>
using namespace std;

int Fibonacci(int n){
    if(n==1 or n==2){
        return n;
    } else{
        return Fibonacci(n-2) + Fibonacci(n-1);
    }
}
int main(){
    int a;
    cout<<"Enter a First Number: ";
    cin>>a;
    int result = Fibonacci(a);
    cout<<"The Result of Number is "<<result<<endl;

    return 0;
}