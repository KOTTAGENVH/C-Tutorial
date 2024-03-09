#include<iostream>
#include<cstring>
#include "Taxi.h"
using namespace std;

 void Taxi::setTaxiDetails(int tID,const char d[],int rPKM,int dt){
   taxiID=tID;
   strcpy(driver,d);
   ratePerKM=rPKM;
   distanceTravelled=dt;
 }
 void Taxi::displayTaxiDetails(){
   cout<<"Taxi ID = "<<taxiID<<endl;
   cout<<"Driver Name = "<<driver<<endl;
   cout<<"Bill Amount = "<<calculateBill()<<endl;
 }
  int Taxi::calculateBill(){
    return ratePerKM*distanceTravelled;
  }