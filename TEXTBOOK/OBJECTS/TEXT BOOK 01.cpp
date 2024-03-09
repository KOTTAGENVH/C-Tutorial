//Fig. 3.1: AccountTest.cpp
//Creating and manipulating an Account object.
#include <iostream>
#include<string>
#include "Account.h"

using namespace std;
int main()
{
	Account myAccount; //create Account onject my Account
	//show that the initial value of myAccount's name is the empty string
	cout<<"Initial account name is: "<<myAcccount.get name();
	
	//prompt for and read name
	cout<<"\nPlease enter the account name: ";
	string theName;//read a line of text
	getline(cin, theName);//put the name in myAccount
	myAccount.setName(theName);//put theName in my Account
	
	//display the name stored in object myAccount
	cout<<"Name in object myAccount is: "
	<<myAccount.getName()<<endl;
}
