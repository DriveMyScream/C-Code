#include <iostream>
#include <string>
using namespace std;

class Binary_Number
{
// This Private Methods we are able to access in only in that class 
// This Private Methods We cannot ascess outside a class
private:
    string num;
    void cheack_number(void);
    void ones_complement(void);
    void print_number(void);
public:
    void read_number(void);
};

void Binary_Number :: read_number(void)
{
    cout << "Enter a Binary Number: ";
    cin >> num;
    cheack_number();
}
void Binary_Number :: cheack_number(void)
{
    for (int i = 0; i < num.length(); i++)
    {
        if (num.at(i) != '0' && num.at(i) != '1')
        {
            cout << "The Given Number is Not in Binary Format"<<endl;
            exit(0);
        }
    }
    print_number();
    ones_complement();
}
void Binary_Number :: ones_complement(void) {
    for(int i=0; i<num.length(); i++){
        if(num.at(i) == '0'){
            num.at(i) = '1';
        } else {
            num.at(i) = '0';
        }
           
    }
    print_number();
}
void Binary_Number :: print_number(void) {
    cout<<"The Binary Number is: ";
    for(int i=0; i<num.length(); i++){
        cout<<num.at(i);
    }
    cout<<endl;
}
int main()
{
    Binary_Number num;
    num.read_number();


    return 0;
}