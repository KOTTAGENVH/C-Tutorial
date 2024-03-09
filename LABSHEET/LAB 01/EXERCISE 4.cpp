#include<iostream>
using namespace std;
int Square(int);
int Cube(int);

int main()
{
  int number;
  cout<<"Number : ";
  cin>>number;
  cout<<"\nSquare : \n"<<Square(number);
  cout<<"Cube : \n"<<Cube(number);
  return 0;
}
int Square(int x){
  return x*x;
}
int Cube(int x){
  return x*x*x;
}