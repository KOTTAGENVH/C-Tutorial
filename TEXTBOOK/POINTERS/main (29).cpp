#include<iostream>
using namespace std;
int main(){
  int *x;
  x=new int;
  *x=25;
  cout<<"The value of x :"<< *x<<endl;

  delete x;
  return 0;
}