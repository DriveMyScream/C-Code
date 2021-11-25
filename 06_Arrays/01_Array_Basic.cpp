#include<iostream>
using namespace std;

int main(){
    int marks [5] = {10, 20, 30, 40, 50};
    int s = sizeof(marks)/sizeof(int);
    for(int i=0; i<s; i++){
        cout<<marks[i]<<" ";
    }


    return 0;
}