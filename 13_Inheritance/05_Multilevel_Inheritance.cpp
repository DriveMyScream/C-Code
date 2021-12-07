#include<iostream>
using namespace std;

class Student {
    protected:
      int roll_number;
    public:
      void set_roll_number(int n){
          roll_number = n;
      }
      void get_roll_number(){
          cout<<"The Roll Number of student is "<<roll_number<<endl;
      }
};

class Exam : public Student {
    protected:
       int math;
       int physics;
       int chemistry;
    public:
       void set_marks(int m1, int m2, int m3){
           math = m1;
           physics = m2;
           chemistry = m3;
       }
       void get_marks(){
           cout<<"The Marks of Math is "<<math<<endl;
           cout<<"The Marks of Physics is "<<physics<<endl;
           cout<<"The Marks of Chemistry is "<<chemistry<<endl;
       }
};

class Result : public Exam {
    public:
       void displayStudentInfo(){
           get_roll_number();
           get_marks();
           int result = math + chemistry + physics;
           float res = result / 3;
           cout<<"The Percentage of marks obtained in exam is "<<res<<endl;
       }
};
int main(){
    Result R1;
    R1.set_roll_number(420);
    R1.set_marks(56, 57, 40);
    R1.displayStudentInfo();


    return 0;
}

