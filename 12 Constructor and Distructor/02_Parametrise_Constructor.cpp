#include<iostream>
using namespace std;
 
class Numbers {
    private:
      int a;
      int b;
    public:
      Numbers(int x, int y){
          a = x;
          b = y;
      }
      void printNumber(){
          cout<<"The First Number is "<<a<<endl;
          cout<<"The Second Number is "<<b<<endl;
      }
      void sum(){
          int result = a + b;
          cout<<"The Sum of two numbers is "<<result<<endl;
      }
      void multiply(){
          int result = a * b;
          cout<<"The Multiplication of numbers is "<<result<<endl;
      }
};
int main(){
    Numbers num(5, 10);
    num.printNumber();
    num.sum();
    num.multiply();

    return 0;
}