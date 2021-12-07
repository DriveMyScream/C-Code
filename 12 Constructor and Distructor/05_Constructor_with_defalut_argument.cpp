#include<iostream>
using namespace std;

class Numbers {
    private:
      int a;
      int b;
    public:
      Numbers(int x, int y=10){
          a = x;
          b = y;
      }
      void PrintData(){
          cout<<"The First Number is "<<a<<endl;
          cout<<"The Second Number is "<<b<<endl;
      }
};
int main(){
    Numbers num(1, 2);
    num.PrintData();
    
    cout<<endl;
    
    Numbers num1(5);
    num1.PrintData();

    return 0;
}