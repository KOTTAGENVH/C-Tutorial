#include<iostream>
#include<cstring>
#include "Book.h"
using namespace std;
 void Book::setBookDetails(int bID,const char bN[],const char a[]){
   bookID=bID;
   strcpy(bookName,bN);
   strcpy(author,a);
 }
  void Book::setBookID(int i){
   cout<<"Enter the new book ID"<<i<<": ";
   cin>>i;
 }
 
 void Book::displayBookDetails(){
   cout<<"The book ID = "<<bookID<<endl;
   cout<<"Book Name"<<bookName<<endl;
   cout<<"Author "<<author<<endl;
 }
