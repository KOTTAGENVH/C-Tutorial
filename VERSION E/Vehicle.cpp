#include<iostream>
#include <cstring>
#include "Vehicle.h"
using namespace std;

void Vehicle::setVehicleDetails(int VID,const char VB[],const char VT[],int VP){
  vehicleID=VID;
  strcpy(vehicleBrand,VB);
  strcpy(vehicleType,VT);
  vehiclePrice=VP;
}
void Vehicle::setVehiclePrice(){
  cout<<"Input vehicle Price"<<vehicleID<<":";
  cin>>vehiclePrice;
}
  void Vehicle::displayVehicleDetails(){
    cout<<"vehicle ID"<<vehicleID<<endl;
    cout<<"vehicleBrand"<<vehicleBrand<<endl;
    cout<<"vehicleType"<<vehicleType<<endl;
    cout<<"vehiclePrice"<<vehiclePrice<<endl;
  }