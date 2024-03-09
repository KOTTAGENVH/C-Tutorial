//Fig. 8.6: fig08_06.cpp
//Pass-by-value used to cube a variable's value.
#include<iostream>
using namespace std;

int cubeByValue(int); //prototype

int main() {
  int number{5};

  cout<<"The original value of number is "<<number;
  number=cubeByValue(number); //pass number by value to cubeByValue
  cout<<"\nThe new value of number is "<<number<<endl;
}

//calculate and return cube of integer argument
int cubeByValue(int n) {
  return n*n*n; //cube local variable n and returned result
}