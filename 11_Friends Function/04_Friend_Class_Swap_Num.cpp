#include<iostream>
using namespace std;

// Forward Declearation
class Second;

class First {
    private:
       int value;
    public:
       void setData(int data){
           value = data;
       }
       void printData(){
           cout<<"The First Class Value is "<<value<<endl;
       }
    friend void swapNum(First &o1, Second &o2);
};

class Second {
    private:
       int num;
    public:
       void setData(int data){
           num = data;
       }
       void printData(){
           cout<<"The Second Class Value is "<<num<<endl;
       }
    friend void swapNum(First &o1, Second &o2);
};

void swapNum(First &o1, Second &o2){
    int temp = o1.value;
    o1.value = o2.num;
    o2.num = temp;
}
int main(){
    First num1;
    num1.setData(10);
    num1.printData();
    Second num2;
    num2.setData(20);
    num2.printData();

    cout<<endl;
    
    swapNum(num1, num2);
    cout<<"After Swaping Numbers: "<<endl;
    num1.printData();
    num2.printData();

    return 0;
}