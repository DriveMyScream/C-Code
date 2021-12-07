#include<iostream>
using namespace std;

class Shop {
    private:
      int id;
      float price;
    public:
      void setData(int a, float b){
          id = a;
          price = b;
      }
      void getData(){
          cout<<"The Id of product is "<<id<<endl;
          cout<<"The Price of product is "<<price<<endl;
      }
};
int main(){
    int size = 3;
    int id;
    float price;
    Shop *p = new Shop[size];

    for(int i=0; i<size; i++){
        cout<<"Enter a Id of Product: ";
        cin>>id;
        cout<<"Enter a Price of product is ";
        cin>>price;
        (p+i)->setData(id, price);
    }

    cout<<"The Item Present in Shop: "<<endl;
    for(int i=0; i<size; i++){     
        (p+i)->getData();
    }

    return 0;
}