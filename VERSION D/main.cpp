#include<iostream>
#include "Book.h"
using namespace std;

int main(){
  Book b1, b2, b3;
  
  b1.setBookDetails(1212,"Jane Eyre","Charlotte Bronte");
  b2.setBookDetails(1234,"Divergent","Veronica Roth");
  b3.setBookDetails(3456,"Matilda","Ronald Dahl");

  b1.setBookID(1);
  b2.setBookID(2);
  b3.setBookID(3);
  
 b1.displayBookDetails();
 b2.displayBookDetails();
 b3.displayBookDetails();

return 0;

}