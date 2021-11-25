#include<iostream>
using namespace std;

struct Student_Data{
    string name;
    int roll_num;
    int marks;
};
int main(){
     struct Student_Data s1, s2;
     s1.name = "Shubham";
     s1.roll_num = 420;
     s1.marks = 82;
     
     s2.name = "Sunil";
     s2.roll_num = 469;
     s2.marks = 89;

     cout<<"The Name of first student is "<<s1.name<<endl;
     cout<<"The Roll Number of first student is "<<s1.roll_num<<endl;
     cout<<"The Marks of first student is "<<s1.marks<<endl;

     cout<<endl;

     cout<<"The Name of second student is "<<s2.name<<endl;
     cout<<"The Roll Number of second student is "<<s2.roll_num<<endl;
     cout<<"The Marks of student is "<<s2.marks<<endl;


    return 0;
}