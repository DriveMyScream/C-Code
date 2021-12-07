#include<iostream>
using namespace std;

class Complex {
    private:
       int real;
       int imaginary;
    public:
       void setNumbers(int a, int b){
           real = a;
           imaginary = b;
       }
       void getNumber(){
           cout<<"The Complex number is "<<real<<"+"<<imaginary<<"i"<<endl;
       }
};
int main(){
//  Complex com;
//  Complex *ptr = &com;
    Complex *ptr = new Complex;
//   (*ptr).setNumbers(5, 10);
    ptr->setNumbers(5, 10);
//    (*ptr).getNumber();
    ptr->getNumber();

//  Array Of Objects
    Complex *p = new Complex[3];
    p->setNumbers(2, 3);
    p->getNumber();
    return 0;
}