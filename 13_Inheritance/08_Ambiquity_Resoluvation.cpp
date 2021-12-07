#include<iostream>
using namespace std;

class Base1 {
    public:
      void greet(){
          cout<<"Good Morning";
      }
};

class Base2 {
    public:
       void greet(){
           cout<<"Good Afternoon";
       }
};

class Base3 {
    public:
       void greet(){
           cout<<"Good Evening";
       }
};

class Derived : public Base1, public Base2, public Base3 {
    public:
        void greet(){
            Base1 :: greet();
        }
};
int main(){
    Derived d;
    d.greet();
    return 0;
}