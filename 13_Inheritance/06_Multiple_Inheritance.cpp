#include<iostream>
using namespace std;

class Numbers {
    public:
       int a;
       int b;
    public:
        void set_number(int num1, int num2){
           a = num1;
           b = num2;
       }
        void get_number(){
           cout<<"The First Number is "<<a<<endl;
           cout<<"The Second Number is "<<b<<endl;
       }
};
class addAndSub : virtual public Numbers {
    public:
       void addition(){
           int result = a + b;
           cout<<"The addition of two numbers is "<<result<<endl;
       }
       void subtraction(){
           int result = a - b;
           cout<<"The Subtraction of two numbers is "<<result<<endl; 
       }
};

class multiAndDivide : virtual public Numbers {
    public:
       void multiply(){
           int result = a * b;
           cout<<"The Multiplication of two numbers is "<<result<<endl;
       }
       void divide(){
           float result = a / b;
           cout<<"The Division of two numbers is "<<result<<endl;
       }
};

class Calculator: public addAndSub, public multiAndDivide {
    public:
       void modula(){
           int result = a % b;
           cout<<"The Module Operator of a and b is "<<result<<endl;
       }
};
int main(){
    Calculator cal;
    cal.set_number(5, 10);
    cal.get_number();
    cal.addition();
    cal.subtraction();
    cal.multiply();
    cal.divide();
    cal.modula();

    return 0;
}