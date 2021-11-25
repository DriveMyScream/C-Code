#include<iostream>
using namespace std;

class Student {
    private:
        int marks;
        int fee_recieve;

    public:
        string full_name;
        int roll_num;
    
        void set_student_info(string full_name1, int roll_num1);
       
        void set_info(int marks1, int fee_recieve1){
             marks = marks1;
             fee_recieve = fee_recieve1;
        }
        void get_info(){
             cout<<"The marks of student is "<<marks<<endl;
             cout<<"The total fee receive from student is "<<fee_recieve<<endl;
        }
        void get_student_info(){
           cout<<"The Name of student is "<<full_name<<endl;
           cout<<"The Roll Number of student is "<<roll_num<<endl;
        }
};

void Student :: set_student_info(string full_name1, int roll_num1){
    full_name = full_name1;
    roll_num = roll_num1;
}

int main(){
    Student shubham;
    shubham.set_info(89, 10000);
    shubham.get_info();
    shubham.set_student_info("Shubham", 420);
    shubham.get_student_info();

    cout<<endl;

    Student sunil;
    sunil.set_info(90, 20000);
    sunil.get_info();
    sunil.set_student_info("Sunil", 469);
    sunil.get_student_info();




    return 0;
}