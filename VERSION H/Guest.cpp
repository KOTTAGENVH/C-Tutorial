
  int calculateGuestBill();
#include<iostream>
#include<cstring>
#include "Guest.h"
using namespace std;

  void Guest::setGuestDetails(int gID,const char gN[],int rD,int nD){
guestID=gID;
strcpy(guestName,gN);
ratePerDay=rD;
numberOfDays=nD;
  }
  void Guest::displayGuestDetails(){
cout<<"Guest ID = "<<guestID<<endl;
cout<<"GuestName = "<<guestName<<endl;
cout<<"Bill Amount = "<<calculateGuestBill()<<endl;
  }
  
  int Guest::calculateGuestBill(){
   return ratePerDay*numberOfDays;
  }
