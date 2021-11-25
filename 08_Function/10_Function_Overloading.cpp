#include<iostream>
using namespace std;

int add(int a, int b){
    int result = a + b;
    return result;
}
int add(int a, int b, int c){
    int result = a + b + c;
    return result;
}
float add(float a, float b){
    float result = a * b;
    return result;
}
float add(float a, float b, float c){
    float result = a * b * c;
    return result;
}

int main(){
    cout<<"The Addtition of 5 and 10 is "<<add(5, 10)<<endl;
    cout<<"The Addition of 5, 10 and 15 is "<<add(5, 10, 15)<<endl;
    cout<<"The Multiplication of 5, 10, and 10.5 is "<<add(10.10F, 20.20F, 30.30F)<<endl;
    cout<<"The Multiplication of 5 and 10 is "<<add(5.10F, 10.20F)<<endl;


    return 0;
}