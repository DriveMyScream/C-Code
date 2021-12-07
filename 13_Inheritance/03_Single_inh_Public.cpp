#include<iostream>
using namespace std;

class addAndSubtract{
    private:
       int a = 100;
       int b = 7;
    public: 
       void printData(){
           cout<<"The First Number is "<<a<<endl;
           cout<<"The Second Number is "<<b<<endl;
       }
       int num1(){
           return a;
       }
       int num2(){
           return b;
       }
       void addition(){
           int result = a + b;
           cout<<"The addition of two numbers is "<<result<<endl;
       }
       void subtraction(){
           int result = a - b;
           cout<<"The Subtraction of two numbers is "<<result<<endl;
       }
};

class mulAndDivide : public addAndSubtract {
    public:
      void multiply(){
          int result = num1() * num2();
          cout<<"The Multiplication of two numbers is "<<result<<endl;
      }
      void divide(){
          float result = num1() / num2();
          cout<<"The Division of two numbers is "<<result<<endl;
      }
};
int main(){
    mulAndDivide num;
    num.printData();
    num.addition();
    num.subtraction();
    num.multiply();
    num.divide();


    return 0;
}