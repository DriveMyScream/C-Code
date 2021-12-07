#include<iostream>
using namespace std;

class Numbers {
    private:
       int a;
       int b;
    public:
       Numbers(){
           a = 0;
           b = 0;
       }
       Numbers(int x){
           a = x;
           b = 0;
       }
       Numbers(int x, int y){
           a = x;
           b = y;
       }
       void PrintNumbers(){
           cout<<"The Two Numbers is "<<a<<" and "<<b<<endl;
       }

};
int main(){
    Numbers num;
    num.PrintNumbers();

    Numbers num1(5);
    num1.PrintNumbers();

    Numbers num2(10, 20);
    num2.PrintNumbers();

    return 0;
}