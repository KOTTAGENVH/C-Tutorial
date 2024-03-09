#include<iostream>
#include<cstring>
#include"Employee.h"
using namespace std;

void Employee::setEmployeeDetails(int eID, char eName[50]){
employeeID=eID;
strcpy (employeeName , eName);
}
int Employee::displayEmployeeDetails(){
cout<<"Employee ID = "<<employeeID<<endl;
cout<<"Employee Name = "<<employeeName<<endl;
cout<<"OT payment = "<<calculateOTPayment()<<endl;
}
void Employee::setOTHours(int OTHrs){
  OTHours=OTHrs;
}
void Employee::setOTRate(int OTRte){
  OTRate=OTRte;
}
int Employee::calculateOTPayment(){
 return (OTHours*OTRate);
}