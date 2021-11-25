#include<iostream>
#include<string>
using namespace std;

int main(){
   string str1 = "Hello ";
   string str2 = "World";
   string str3;
   int len;

// Copy Str1 into str2
   str3 = str1;
   cout<<str3<<endl;

// Concatenates str1 and str 2
   str3 = str1 + str2;
   cout<<str3<<endl;

// The Length Of a String
   len = str3.size();
   cout<<"The Number Of Element Present in String is "<<len<<endl;



    return 0;
}