#include<iostream>
using namespace std;

class Numbers {
    protected:
       int a;
       int b;
    public:
       void set_Number(int num1, int num2){
            a = num1;
            b = num2;
       }
       void get_Number(){
           cout<<"The First Number is "<<a<<endl;
           cout<<"The Second Number is "<<b<<endl;
       }
};

class AddandSubtract: virtual public Numbers{
    public:
       void addition(){
           int result = a + b;
           cout<<"The Addition of two numbers is "<<result<<endl;
       }
       void subtraction(){
           int result = a - b;
           cout<<"The Subtraction of two numbers is "<<result<<endl;
       }
};

class mulandDivide : virtual public Numbers {
    public:
       void multiplication(){
           int result = a * b;
           cout<<"The Multiplication of two numbers is "<<result<<endl;
       }
       void divide(){
           int result = a / b;
           cout<<"The Division of two numbers is "<<result<<endl;
       }
};
class Calculator : public AddandSubtract, public mulandDivide {
    public:
       void modula(){
           int result = a % b;
           cout<<"The modula operation of two numbers is "<<result<<endl;
       }
};
int main(){
    Calculator cal;
    cal.set_Number(10, 20);
    cal.get_Number();
    cal.addition();
    cal.subtraction();
    cal.multiplication();
    cal.divide();
    cal.modula();
    return 0;
}