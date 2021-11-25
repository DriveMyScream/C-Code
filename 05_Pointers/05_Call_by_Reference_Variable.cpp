#include<iostream>
using namespace std;

void swap_by_Reference(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a=10, b=20;
    cout<<"The Value of a is "<<a<<" and b is "<<b<<endl;
    swap_by_Reference(a, b);
    cout<<"The Value of a is "<<a<<" and b is "<<b<<endl;

    return 0;
}