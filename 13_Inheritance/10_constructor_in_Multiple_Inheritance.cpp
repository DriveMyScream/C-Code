#include<iostream>
using namespace std;

class Base1{
    private:
       int num1;
    public:
       Base1(int a){
           num1 = a;
       }
       void PrintNum1(){
           cout<<"The First Number is "<<num1<<endl;
       }
};
class Base2{
    private:
       int num2;
    public:
       Base2(int b){
           num2 = b;
       }
       void PrintNum2(){
           cout<<"The Second Number is "<<num2<<endl;
       }
};

class Derived : public Base1, public Base2 {
    private:
       int num3;
       int num4;
    public:
       Derived(int a, int b, int c, int d): Base1(a), Base2(b){
           num3 = c;
           num4 = d;
       }
       void PrintNumbers(){
           PrintNum1();
           PrintNum2();
           cout<<"The Third number is "<<num3<<endl;
           cout<<"The Fourth number is "<<num4<<endl;
       }
};
int main(){
    Derived d(5, 10, 15, 20);
    d.PrintNumbers();

    return 0;
}