#include<iostream>
using namespace std;

class Numbers {
    private:
       int a;
       int b;
    public:
       void setData(int a, int b){
           this->a = a;
           this->b = b;
       }
       Numbers & setDeta(int a, int b){
           this->a = a;
           this->b = b;
           return *this;
       }

       void getData(){
           cout<<"The Value of a is "<<a<<endl;
           cout<<"The Value of b is "<<b<<endl;
       }
};
int main(){
    Numbers num;
    num.setDeta(100, 200).getData();
    
    num.setData(10, 20);
    num.getData();

    return 0;
}