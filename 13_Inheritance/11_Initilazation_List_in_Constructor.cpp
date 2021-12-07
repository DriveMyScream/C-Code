#include<iostream>
using namespace std;

class Numbers {
    private:
       int a;
       int b;
    public:
       Numbers(int num1, int num2) : a(num1), b(num2){
            PrintNumbers();
       }
       void PrintNumbers(){
           cout<<"The First Number is "<<a<<endl;
           cout<<"The Second Number is "<<b<<endl;
       }
};
int main(){
    Numbers num(5, 10);

    return 0;
}