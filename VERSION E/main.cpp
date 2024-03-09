#include<iostream>
#include "Vehicle.h"
using namespace std;

int main(){
  Vehicle v1,v2,v3;
  v1.setVehicleDetails(1,"Toyota","SUV",8500000);
  v2.setVehicleDetails(2,"Nissan","Saloon",6000000);
  v3.setVehicleDetails(3,"Honda","Convertable",7200000);

v1.setVehiclePrice();
v2.setVehiclePrice();
v3.setVehiclePrice();

 v1.displayVehicleDetails();
 v2.displayVehicleDetails();
v3.displayVehicleDetails();

}