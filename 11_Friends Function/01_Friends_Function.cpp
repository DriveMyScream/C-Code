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
       void PrintData(){
           cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
       }
       friend Complex_Number sumNumber(Complex_Number o1, Complex_Number o2);
};

Complex_Number sumNumber(Complex_Number o1, Complex_Number o2){
    Complex_Number o3;
    o3.setData((o1.a + o1.b), (o2.a + o2.b));
    return o3;
}

int main(){
    Complex_Number num1, num2, sum;
    num1.setData(2, 5);
    num1.PrintData();

    num2.setData(3, 5);
    num2.PrintData();
    
    sum = sumNumber(num1, num2);
    sum.PrintData();


    return 0;
}