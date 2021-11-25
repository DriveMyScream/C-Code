#include<iostream>
#include<string>
#include<cstring>
using namespace std;
struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};
int main(){
    struct Books book1, book2;
    strcpy(book1.title, "Lets Learn C++ Programming");
    strcpy(book1.author, "Chand Miyan");
    strcpy(book1.subject, "C Programming");
    book1.book_id = 10101;

    cout<<"The Name of book is "<<book1.title<<endl;
    cout<<"The Author of a book is "<<book1.author<<endl;
    cout<<"The Subject of book is "<<book1.subject<<endl;
    cout<<"the Id Of Book is "<<book1.book_id<<endl;

    strcpy(book2.title, "Learn Java Programming");
    strcpy(book2.author, "someone");
    strcpy(book2.subject, "Java Programming");
    book2.book_id = 1234;

    cout<<endl;

    cout<<"The Name of book is "<<book2.title<<endl;
    cout<<"The Author of a book is "<<book2.author<<endl;
    cout<<"The Subject of a book is "<<book2.subject<<endl;
    cout<<"The Id of a book is "<<book2.book_id<<endl;

    return 0;
}
