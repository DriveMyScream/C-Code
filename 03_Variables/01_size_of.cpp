#include<iostream>
using namespace std;

int main(){
    int a = 10;
    float b = 10.10;
    float c = 10.10f;
    bool d = true;
    cout<<"The value of a is "<<a<<endl<<"and The Value of b is "<<b<<endl;
    cout<<"The size of 10 in int is "<<sizeof(a)<<endl;
    cout<<"The size of 10.10 in float is "<<sizeof(b)<<endl;
    cout<<"The size of 10.10 in float f is "<<sizeof(c)<<endl;
    cout<<"The size of true in bool is "<<sizeof(d)<<endl;


    return 0;
}