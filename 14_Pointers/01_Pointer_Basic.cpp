#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int* b = &a;
    *b = 100;
    cout<<"The address of a is "<<b<<endl;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The Value at address is "<<*(b)<<endl;
    cout<<"The Value at address is "<<a<<endl;

    cout<<endl;

    int* c = new int(40);
    cout<<"The Address of c is "<<c<<endl;
    cout<<"The Value at address of c is "<<*(c)<<endl;
    
    cout<<endl;

    int* arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 20;
    arr[2] = 30;
//  To Delete this dynamically allocated array
//  delete[] arr;
    cout<<"The Value of arr[0] is "<<arr[0]<<endl;
    cout<<"The Value of arr[1] is "<<arr[1]<<endl;
    cout<<"The Value of arr[2] is "<<arr[2]<<endl;
    return 0;
}