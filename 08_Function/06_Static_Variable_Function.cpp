#include<iostream>
using namespace std;

int Sum(int a, int b){
    static int c = 0;
    c = c + 1;
    cout<<"The Value Of c is "<<c<<endl;
    return a+b+c;
}

int main(){
    int a=5, b=5;
    cout<<"The Sum Of Two Values is "<<Sum(a, b)<<endl;
    cout<<"The Sum Of Two Values is "<<Sum(a, b)<<endl;
    cout<<"The Sum Of Two Values is "<<Sum(a, b)<<endl;
    cout<<"The Sum Of Two Values is "<<Sum(a, b)<<endl;
    cout<<"The Sum Of Two Values is "<<Sum(a, b)<<endl;
    


    return 0;
}
