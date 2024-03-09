//Fig. 3.2: Account.h
//Account class that contains a name data member
//and member functions to set and get its value.
#include<string>//enable program to use C++ string data type
class Account {
  public:
  //member function that sets the Accountname in the objects
  void setName(std::string accountName){
    name = accountName;//store the account name
  }

  //member function that retrieves the account name from the object
  std::string getName() const{
    return name; //return name's value to this function caller
  }
  private:
  std::string name;//data member containing account holder's name
}; //end of class
