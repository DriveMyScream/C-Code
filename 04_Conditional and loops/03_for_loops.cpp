#include <iostream>
using namespace std;

int main(){
//  for loop
    for(int i=1; i<=10; i++){
        cout<<i<<endl;
    }
    cout<<endl;

//  while loop
    int i = 1;
    while(i<=10){
        cout<<i<<endl;
        i++;
    }
    cout<<endl;

//  do while loop
    int j = 1;
    do {
        cout<<j<<endl;
        j++;
    } while(j<=10);

    return 0;
}