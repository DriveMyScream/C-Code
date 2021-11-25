#include<iostream>
using namespace std;

int main(){
    int day;
    cout<<"Enter a day: ";
    cin>>day;

    switch(day){
        case 1:
        cout<<"Today is Monday"<<endl;
        cout<<"Go to your work"<<endl;
        break;

        case 2:
        cout<<"Today is Tuesday"<<endl;
        cout<<"Its your choice go to work"<<endl;
        break;

        case 3:
        cout<<"Today is Wednesday"<<endl;
        cout<<"You can go to rest"<<endl;
        break;

        case 4:
        cout<<"Today is Thusday"<<endl;
        cout<<"today is holiday"<<endl;
        break;

        default:
        cout<<"Goo to work"<<endl;
    }
}