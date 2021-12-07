#include<iostream>
using namespace std;

class Base {
    public:
       int a = 10;
       int b = 20;
       virtual void getData(){
           cout<<"The Value of a is "<<a<<endl;
           cout<<"The Value of b is "<<b<<endl;
       }
};

class Derived : public Base {
    public:
        int c = 100;
        int d = 200;
        void get_Data(){
            cout<<"The Value of c is "<<c<<endl;
            cout<<"The Value of d is "<<d<<endl;
        }
};
int main(){
    Base *ptr;
    Base base_obj;
    Derived derived_obj;
    ptr = &derived_obj;
    ptr->getData();
    return 0;
}