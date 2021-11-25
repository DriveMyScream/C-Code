#include<iostream>
#include<cstring>
using namespace std;

typedef struct {
    string name;
    int roll_num;
    int marks;
} Student;

int main(){
    Student s1, s2;
    s1.name = "Shubham";
    s1.roll_num = 420;
    s1.marks = 85;

    s2.name, "Sunil";
    s2.roll_num = 469;
    s2.marks = 89;

    cout<<"The Name of s1 student is "<<s1.name<<endl;
    cout<<"The Roll Number of student is "<<s1.roll_num<<endl;
    cout<<"The Marks of student is "<<s1.marks<<endl;

    cout<<endl;

    cout<<"The Name of s2 student is "<<s2.name<<endl;
    cout<<"The Roll Number of student is "<<s2.roll_num<<endl;
    cout<<"The Marks of student is "<<s2.marks<<endl;


    return 0;
}