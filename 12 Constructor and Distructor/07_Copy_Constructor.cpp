#include<iostream>
using namespace std;

class Number {
    private:
      int a;
      int b;
    public:
      Number(){
        a = 10;
        b = 20;
      }
      Number(int x, int y){
        a = x;
        b = y;
      }
    // When There is no copy constructor found compalier supply its own Copy constructor to program
    /*  Number(Number &obj){
          a = obj.a;
          b = obj.b;
      }  */
      void printNumber(){
          cout<<"The First Number is "<<a<<endl;
          cout<<"The Second Number is "<<b<<endl;
      }
};
int main(){
    Number num1(100, 200), num2(400, 500), num3(700, 800);
    num1.printNumber();
    num2.printNumber();
    num3.printNumber();

    Number Num4(num1);
    Num4.printNumber();

    return 0;
}