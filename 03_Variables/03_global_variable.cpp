#include<iostream>
using namespace std;

    int c = 10;
int main(){
    int a, b, c;
    cout<<"Enter a First number: ";
    cin>>a;
    cout<<"Enter a Second number: ";
    cin>>b;
    c = a + b;
    cout<<"The Sum of two numbers is: "<<c<<endl;
    cout<<"The Global c variable is: "<<::c;
    

    return 0;
}