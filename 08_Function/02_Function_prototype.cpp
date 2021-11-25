#include<iostream>
using namespace std;

int maxNum(int a, int b, int c);
int main(){
    int a, b, c;
    cout<<"Enter a First Number: ";
    cin>>a;
    cout<<"Enter a Second Number: ";
    cin>>b;
    cout<<"Enter a Third Number: ";
    cin>>c;

    int result = maxNum(a, b, c);
    cout<<"The Largest Among "<<result;

    return 0;
}

int maxNum(int a, int b, int c){
    if(a>b && a>c){
        return a;
    } else if(b>c){
        return b;
    } else {
        return c;
    }
       
}