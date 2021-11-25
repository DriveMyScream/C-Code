#include<iostream>
using namespace std;

int main(){
    int a = 18, b = 35;
    bool isSunday = true;
    cout<<"The a is greater than 20 and less and 10 "<<((a<20) && (a>10))<<endl;
    cout<<"The b is greater than 30 and less than 20 "<<((b<30) || (a>20))<<endl;
    cout<<"The Logical not of isSunday is "<<(!isSunday)<<endl;
    cout<<"The Logical not of a == b is False becomes "<<(!(a==b))<<endl;

    return 0;
}