//Fig. 8.4: fig08_04.cpp
//Pointer oprators & and *
#include<iostream>
using namespace std;

int main() {
	int a{ 7 }; //initialize a with 7
	int* aPtr = &a; //initialize aPtr with the address of int variable a

	cout << "The address of a is " << &a << "\nThe address of aPtr is " << aPtr;
	cout << "\n\nThe value of a is " << a << "\nThe value of *aPtr is " << *aPtr << endl;
}
