#include<iostream>
using namespace std;

class Base {
    private:
       int a;
       int b;
    public:
       void setData(int a, int b){
           this->a = a;
           this->b = b;
       }
       void getData(){
           cout<<"The Value of a is "<<a<<endl;
           cout<<"The Value of b is "<<b<<endl;
       }
};

class Derived : public Base {
    private:
       int c;
       int d;
    public:
       void set_Data(int c, int d){
           this->c = c;
           this->d = d;
       }
       void get_Data(){
           cout<<"The Value of c is "<<c<<endl;
           cout<<"The Value of d is "<<d<<endl;
       }
};
int main(){
    Base* ptr;
    Base base_obj;
//    base_obj.setData(10, 20);
    Derived derived_obj;
    derived_obj.set_Data(100, 200); // Not UseFull
    ptr = &derived_obj;
    ptr->setData(10, 20);
    ptr->getData();
    
    cout<<endl;

    Derived *pqr;
    Derived derived_obj1;
    pqr = &derived_obj1;
    pqr->set_Data(100, 200);
    pqr->get_Data();


    return 0;
}