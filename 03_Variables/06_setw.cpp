#include<iostream>
#include<iomanip>
using namespace std;

int main() {
     int a = 10;
     int b = 100;
     int c = 1000;
     cout<<"The Value of a is "<<a<<endl;
     cout<<"The Value of b is "<<b<<endl;
     cout<<"The Value of c is "<<c<<endl;

     cout<<endl;

     cout<<"The Value of a is "<<setw(4)<<a<<endl;
     cout<<"The Value of b is "<<setw(4)<<b<<endl;
     cout<<"The Value of c is "<<setw(4)<<c<<endl;

    return 0;
}