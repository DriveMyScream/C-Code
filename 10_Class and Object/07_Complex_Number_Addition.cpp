#include<iostream>
using namespace std;

class Complex_Number {
    private:
        int a;
        int b;
    public: 
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }
        void SumTheData(Complex_Number o1, Complex_Number o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
        void PrintData(void){
            cout<<"The Complex Number is "<<a<<"+"<<b<<"i"<<endl;
        }

};
int main(){
    Complex_Number num1, num2, num3;
    num1.setData(2, 3);
    num1.PrintData();

    num2.setData(3, 5);
    num2.PrintData();

    num3.SumTheData(num1, num2);
    num3.PrintData();
    return 0;
}