#include<iostream>
using namespace std;

class Number1 {
    protected:
       int a;
    public:
       void set_number1(int num1){
           a = num1;
       }
       void get_number1(){
           cout<<"The Number1 Class Number is "<<a<<endl;
       }
};

class Number2 {
    protected:
       int b;
    public:
       void set_number2(int num2){
           b = num2;
       }
       void get_number2(){
           cout<<"The Number2 Class Number is "<<b<<endl;
       }
};

class Numbers : public Number1, public Number2{
    public:
       void printNumbers(){
           get_number1();
           get_number2();
       }
       void addition(){
           int result = a + b;
           cout<<"The Addition of two numbers is "<<result<<endl;
       }
       void subtraction(){
           int result = a - b;
           cout<<"The Subtraction of two numbers is "<<result<<endl;
       }
};
int main(){
    Numbers num;
    num.set_number1(5);
    num.set_number2(10);
    num.printNumbers();
    num.addition();
    num.subtraction();

    return 0;
}