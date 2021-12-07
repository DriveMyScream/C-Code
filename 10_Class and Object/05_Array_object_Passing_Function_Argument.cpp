#include<iostream>
using namespace std;

class Employee{
    int Id;
    int Salary;
    public:
        void setId(void){
            Salary = 130;
            cout<<"Enter a Id Of Employee: ";
            cin>>Id;
        }
        void getId(void){
            cout<<"The Id Of Employee is "<<Id<<endl;
        }
};

int main(){
    // Employee shubham, sunil;
    // shubham.setId();
    // shubham.getId();

    // sunil.setId();
    // sunil.getId();

    Employee Company[5];
    for(int i=0; i<5; i++){
        Company[i].setId();
        Company[i].getId();
    }

    return 0;
}