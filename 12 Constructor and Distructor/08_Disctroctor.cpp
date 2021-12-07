#include<iostream>
using namespace std;

int count = 0;
class Numbers {
    public:
      Numbers(){
          cout<<"The Constructor Invoked of that object"<<endl;
          count++;
          cout<<"The Count value is "<<count<<endl;
      }
      ~Numbers(){
          cout<<"The Desctroctor Invoked of that object"<<endl;
          count--;
          cout<<"The Count value is "<<count<<endl;
      }
};
int main(){
    cout<<"This is a main class"<<endl;
    Numbers num1;
    {
        cout<<"Inside a block"<<endl;
        Numbers num2, num3;
        cout<<"Exist a block"<<endl;
    }
    cout<<"End of a program"<<endl;;

    return 0;
}