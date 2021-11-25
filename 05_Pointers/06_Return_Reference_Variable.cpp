#include<iostream>
using namespace std;

int & referenceVariable(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return a;
}
int main(){
    int a=10, b=20;
    cout<<"The Value of a is "<<a<<" and b is "<<b<<endl;
    referenceVariable(a, b) = 100;
    cout<<"The Value of a is "<<a<<" and b is "<<b<<endl;


    return 0;
}