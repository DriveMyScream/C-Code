#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter Your age: ";
    cin>>age;

    if(age>18){
        cout<<"You are able to vote";
    } else if(age>25){
        cout<<"You are able to vote and also give a vote";
    } else{
        cout<<"You are not able to vote";
    }



    return 0;
}