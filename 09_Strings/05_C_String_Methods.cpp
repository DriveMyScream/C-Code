#include<iostream>
#include<cstring>

using namespace std;
int main(){
    char str1[10] = "Hello ";
    char str2[10] = "World";
    char str3[30];
    int len;

//  Copy String str1 to str2
    strcpy(str3, str1);
    cout<<str3<<endl;

//  concatenates str1 and str2
    strcat(str1, str2);
    cout<<str1<<endl;

//  Length of a string
    len = strlen(str1);
    cout<<"The Length of a string is "<<len;


    return 0;
}