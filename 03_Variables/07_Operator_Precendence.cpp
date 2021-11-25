#include<iostream>
using namespace std;

int main(){
    int a = 5, b = 10;
    int c = a*b / a + b;
    cout<<"The Answer of c is "<<c<<endl;
    
    c = (a*b) / (a+b);
    cout<<"The Answer of c is "<<c<<endl;

    return 0;
}