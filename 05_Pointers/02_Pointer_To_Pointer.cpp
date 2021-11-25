#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int* b = &a;
    int** c = &b;
    cout<<"The Address of a is "<<&a<<endl;
    cout<<"The Address of b is "<< &b<<endl;
    cout<<"The Address of c is "<<c<<endl;
    cout<<"The Value at Address of b is "<<*b<<endl;
    cout<<"The Value at Address value_at(value_at(c)) is "<<**c<<endl;


    return 0;
}