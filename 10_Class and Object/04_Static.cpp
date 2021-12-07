#include<iostream>
using namespace std;

class Employee{
    int Id;
    static int count; // default value = 0;
    public:
        void set_data(void){
            cout<<"Enter a Id Of Employee: ";
            cin>>Id;
            count++;
        }
        void get_data(void){
            cout<<"The Id Of Employee is "<<Id<<endl;
            cout<<"The Count no of Employee is "<<count<<endl;
        }
    static void getTotalCount(void){
        cout<<"The Total Count of Employee is: "<<count<<endl;
    }
};
// Count is a static data member of class employee
int Employee :: count;  // count=10;

int main(){
    Employee shubham, sunil;

/*  This Id and count variable are Private so we cant direct ascess them
    it can only acesss inside a class 
    shubham.Id = 10;
    shubham.count = 1;         */
    
    shubham.set_data();
    shubham.get_data();

    sunil.set_data();
    sunil.get_data();
    
    Employee::getTotalCount();

    return 0;
}