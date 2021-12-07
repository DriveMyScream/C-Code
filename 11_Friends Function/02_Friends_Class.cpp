#include<iostream>
using namespace std;

// Forward Decleration Of Class 
class Complex_Number;

class Calculator{
    public:
       void sumNumber(int a, int b){
           int result = a + b;
           cout<<"The Sum Of Two Number is "<<result<<endl;
       }

       void sumComplex(Complex_Number o1, Complex_Number o2);
       void realSum(Complex_Number o1, Complex_Number o2);
       void imgSum(Complex_Number o1, Complex_Number o2);

};
class Complex_Number {
    private: 
       int a;
       int b;
    //    This is one type is alow to ascess private data one one class to another class
    //    friend void Calculator :: sumComplex(Complex_Number o1, Complex_Number o2);
    //    friend void Calculator :: realSum(Complex_Number o1, Complex_Number o2);
    //    friend void Calculator :: imgSum(Complex_Number o1, Complex_Number o2);

    // and The Second option is to direct make other class as friend class
    friend class Calculator;
    public:
       void set_Data(int v1, int v2){
           a = v1;
           b = v2;
       }
       void print_Data(){
           cout<<"The Complex Number is "<<a<<"+"<<b<<"i"<<endl;
       }
};

void Calculator :: sumComplex(Complex_Number o1, Complex_Number o2){
           int result1 = o1.a + o2.a;
           int result2 = o1.b + o2.b;
           cout<<"The complex Number is "<<result1<<"+"<<result2<<"i"<<endl;
       }

void Calculator :: realSum(Complex_Number o1, Complex_Number o2){
           int real = o1.a + o2.a;
           cout<<"The Real Part of Numbers is "<<real<<endl;
}

void Calculator :: imgSum(Complex_Number o1, Complex_Number o2){
           int img = o1.b + o2.b;
           cout<<"The Imaginary Part Of Number is "<<img<<endl;
}

int main(){
    Complex_Number num1, num2;
    num1.set_Data(3, 5);
    num1.print_Data();
    
    num2.set_Data(2, 6);
    num2.print_Data();

    Calculator c1;
    c1.sumNumber(10, 20);
    c1.sumComplex(num1, num2);
    c1.realSum(num1, num2);
    c1.imgSum(num1, num2);


    return 0;
}