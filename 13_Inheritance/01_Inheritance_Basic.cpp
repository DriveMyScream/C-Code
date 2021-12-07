#include<iostream>
using namespace std;

class Employee {
    private:
       int id;
       float salary;
    public:
       Employee(){}
       Employee(int inid, float ssalary){
           id = inid;
           salary = ssalary;
       }
       void printData(){
           cout<<"The Id Of Employee is "<<id<<endl;
           cout<<"The Salary of Employee is "<<salary<<endl;
       }
};

/*
1. Default veasibility mode is private
2. public visilibity mode: public methods or public variables of base class 
becomes public to derived class
3. private visibility mode: public methods or public variables of base class  
becomes private to derived class
4. Private variables or methods are not ascess to derived class
*/

class Programmer : Employee {
    private:
       int languageCode;
       string language;
    public:
       Programmer(int code, string lang){
           languageCode = code;
           language = lang;
       }
       void printDataOfPrg(){
           cout<<"The Language Code of that employee is "<<languageCode<<endl;
           cout<<"The Language of that employee is "<<language<<endl;
       }

};

int main(){
    Employee emp1(10, 10000);
    emp1.printData();
    
    Programmer prg(10, "Java");
    prg.printDataOfPrg();

    return 0;
}