#include<iostream>
using namespace std;

int get_amount(int amount, float factor=1.06){
    float new_amount = amount * factor;
    return new_amount;
}

int main(){
    int amount = 20000;
    float factor = 0.8;
    float result = get_amount(amount, factor);
    cout<<"The Amount get return after one year is "<<result<<endl;
    
    int new_amount = 30000;
    float result1 = get_amount(new_amount);
    cout<<"The Amount get return after two year is "<<result1<<endl;
    return 0;
}