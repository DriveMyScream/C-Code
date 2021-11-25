#include<iostream>
using namespace std;

int main(){

    enum studentRoll_num {Shubham, Sunil, Ganesh, Shanker};
    cout<<"The Roll Number of Shubham is "<<Shubham<<endl;
    cout<<"The Roll Number of Sunil is "<<Sunil<<endl;
    cout<<"The Roll Number of Ganesh is "<<Ganesh<<endl;
    cout<<"The Roll Number of Shanker is "<<Shanker<<endl;
    
    studentRoll_num r1 = Shubham;
    studentRoll_num r2 = Sunil;
    studentRoll_num r3 = Ganesh;
    studentRoll_num r4 = Shanker;

    cout<<r1<<endl;
    cout<<r2<<endl;
    cout<<r3<<endl;
    cout<<r4<<endl;


    return 0;
}