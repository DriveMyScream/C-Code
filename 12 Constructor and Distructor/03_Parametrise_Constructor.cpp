#include<iostream>
using namespace std;

class PointDistance {
    private:
      int a;
      int b;
    public:
      PointDistance(int x, int y){
          a = x;
          b = y;
      }
      void printNumber(){
          cout<<"The First Number is "<<a<<endl;
          cout<<"The Second Number is "<<b<<endl;
      }
      friend PointDistance Distance(PointDistance x, PointDistance y);
};
PointDistance Distance(PointDistance x, PointDistance y){
          int result1 = y.a - x.a;
          int result2 = y.b - x.b;
          cout<<"The First distance is "<<result1<<endl;
          cout<<"The Second distance is "<<result2<<endl;
      }


int main(){
    PointDistance a(3, 6);
    PointDistance b(5, 10);
    a.printNumber();
    cout<<endl;
    b.printNumber();
    
    cout<<endl;

    Distance(a, b);


    return 0;
}