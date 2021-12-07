#include<iostream>
using namespace std;

class BankDeposit {
    private:
       int principal_Amount;
       int duration;
       float interest_rate;
       float final_Amount;
    public:
       BankDeposit(){};
       BankDeposit(int pr, int du, float in);
       BankDeposit(int pr, int du, int in);

       void PrintAmount(){
            cout<<"The Final Amount You will get is "<<final_Amount<<endl;
       }
};
 
BankDeposit :: BankDeposit(int pr, int du, float in){
    principal_Amount = pr;
    duration = du;
    interest_rate = in;
    for(int i=0; i<duration; i++){
        final_Amount = principal_Amount * (1+interest_rate); 
    }
}
BankDeposit :: BankDeposit(int pr, int du, int in){
    principal_Amount = pr;
    duration = du;
    interest_rate = (float) in / 100;
    for(int i=0; i<duration; i++){
        final_Amount = principal_Amount * (1+interest_rate); 
    }
}
int main(){
    BankDeposit bk1, bk2, bk3;

    int PrAmount1, duration1;
    int Inter1;
    cout<<"Enter a Principal Amount: ";
    cin>>PrAmount1;
    cout<<"Enter a Duration: ";
    cin>>duration1;
    cout<<"Enter a Interset Rate in integer format: ";
    cin>>Inter1;
    
    bk1 = BankDeposit(PrAmount1, duration1, Inter1);
    bk1.PrintAmount();
    
    cout<<endl;
    
    int PrAmount2, duration2;
    float Inter2;
    cout<<"Enter a Principal Amount: ";
    cin>>PrAmount2;
    cout<<"Enter a Duration: ";
    cin>>duration2;
    cout<<"Enter a Interset Rate in float Format: ";
    cin>>Inter2;
    
    bk2 = BankDeposit(PrAmount2, duration2, Inter2);
    bk2.PrintAmount();




    return 0;
}