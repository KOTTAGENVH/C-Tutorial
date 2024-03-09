#include<iostream>
using namespace std;

int main() {
  int *x;
  int count=5;

  x=&count;

  cout<<"Memory address of cout : "<<&count<<endl;
  cout<<"The content of x  :"<<x<<endl;
  cout<<"The content pointed by x :"<<*x<<endl;
  return 0;
}