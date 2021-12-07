#include<iostream>
using namespace std;

// Forward Decleration
class Second;

class First {
    private:
      int data;
    public:
      void setData(int val){
           data = val;
      }
    friend void add(First o1, Second o2);
};

class Second {
    private:
      int num;
    public:
      void setData(int val){
          num = val;
      }
    friend void add(First o1, Second o2);
};

void add(First o1, Second o2){
    int result = o1.data + o2.num;
    cout<<"The Sum of Two Numbers is "<<result<<endl;
}

int main(){
    First num1;
    Second num2;
    num1.setData(5);
    num2.setData(5);

    add(num1, num2);

    return 0;
}