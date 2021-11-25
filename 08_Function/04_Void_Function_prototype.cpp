#include<iostream>
using namespace std;

void print(string name);
// void print(void);
int main(){
    string name = "Shubham";
    print(name);
    print("Sunil");

}

void print(string name){
    cout<<"Hello "<<name<<endl;
}