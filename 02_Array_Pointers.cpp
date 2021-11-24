#include<iostream>
using namespace std;

int main(){
   int mark[5] = {10, 20, 30, 40, 50};
    int s = sizeof(mark)/sizeof(int);
    for(int i=0; i<s; i++){
        cout<<mark[i]<<" ";
    }
   
   cout<<endl;

   int marks[5] = {10, 20, 30, 40, 50};
   int s1 = sizeof(marks)/sizeof(int);
   int* a = &marks[0];
   for(int i=0; i<s1; i++){
       cout<<*a<<" ";
       a = a + 1;
   }   
    
    cout<<endl;
    
    int mathMarks[5] = {100, 200, 300, 400, 500};
    int *p = mathMarks;
    int s2 = sizeof(mathMarks) / sizeof(int);
    for(int i=0; i<s2; i++){
        cout<<*p<<" ";
        p = p + 1;
    }
    
    cout<<endl;

    int *P = mathMarks;
    int s3 = sizeof(mathMarks) / sizeof(int);
    for(int i=0; i<s3; i++){
        cout<<*(P+i)<<" ";
    }

    cout<<endl;
    
    int *point = mathMarks;
    int s4 = sizeof(mathMarks) / sizeof(int);
    for(int i=0; i<s4; i++){
        cout<<*(point++)<<" ";
    }

    cout<<endl;
    cout<<mark<<endl;
    cout<<marks<<endl;
    cout<<mathMarks<<endl;
    return 0;
}