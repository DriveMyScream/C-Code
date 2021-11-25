#include<iostream>
using namespace std;

union money {
    int Rupees;
    int Doller;
    int Euro;
};
int main(){
    /* at a time you can use only one type of 
    Currency to buy your product  */
    union money m1;
    m1.Rupees = 100;
    m1.Doller = 300;
    // it will override a Doller Value into Rupees
    cout<<"The Rupees is used to buy a product "<<m1.Rupees<<endl;

    union money m2;
    m2.Doller = 200;
    cout<<"The Dooler is used to buy a product "<<m2.Doller<<endl;

    union money m3;
    m3.Euro = 300;
    cout<<"The Euro is used to buy a product "<<m3.Euro<<endl;





    return 0;
}
