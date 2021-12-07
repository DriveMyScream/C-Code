#include<iostream>
using namespace std;

class Numbers {
    private:
      int a;
      int b;
    public:
      Numbers(void); // Constructor Diclearation
      void printNumbers(){
          cout<<"The Value of a is "<<a<<endl;
          cout<<"The Value of b is "<<b<<endl;
      }
};
Numbers :: Numbers(){
    a = 10;
    b = 20;
}
int main(){
    Numbers num;
    num.printNumbers();
    return 0;
}