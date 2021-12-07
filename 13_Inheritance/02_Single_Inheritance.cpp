#include<iostream>
using namespace std;

class addAndSubtract{
    private:
      int num = 10;
    public:
      int a;
      int b;
      void printNumber(){
          cout<<"The First Number is "<<a<<endl;
          cout<<"the Second Number is "<<b<<endl;
      }
      void Addition(){
          int result = a + b;
          cout<<"The Addition of two numbers is "<<result<<endl;
      }
      void Subtraction(){
          int result = a - b;
          cout<<"The Subtraction of two numbers is "<<result<<endl;
      }
      void getPrivateData(){
          cout<<"The Private Data is "<<num<<endl;
      }
      
};

class mulAndDivide : public addAndSubtract {
     public: 
       mulAndDivide(int num1, int num2){
          a = num1;
          b = num2;
       }
       void multiply(){
           int result = a * b;
           cout<<"The Multiplication of two numbers is "<<result<<endl;
       }
       void divide(){
           float result = a / b;
           cout<<"The Division of two numbers is "<<result<<endl;
       }
};
int main(){
    mulAndDivide num1(5, 10);
    num1.getPrivateData();
    num1.printNumber();
    num1.Addition();
    num1.Subtraction();
    num1.multiply();
    num1.divide();
    return 0;
}