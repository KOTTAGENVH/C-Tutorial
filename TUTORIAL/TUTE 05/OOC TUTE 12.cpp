#include <iostream>

using namespace std;

int main() {
  float number1 = 6.2;
  float number2 = 7.3;

  //Define the variable fPtr to be a pointer to a variable of type float
  float *fPtr;

  //Assign the address of variable number1 to pointer variable fPtr.
  fPtr = &number1;

  //Print the value of the object pointed to by fPtr.
  cout << *fPtr << endl;
  
  //Assign the value of the variable pointed to by fPtr to variable number2.
  number2 = *fPtr;

  //Print the value of number2.
  cout << number2 << endl;

  //Print the address of number1
  cout << &number1 << endl;

  //Print the address stored in fPtr. Is the value printed the same as the address of number1? 
  cout << fPtr << endl;

}
