#include<iostream>
#include<cstring>
#include "Taxi.h"
using namespace std;

int main(void){
  
  Taxi t1,t2,t3;
  t1.setTaxiDetails(1234,"Ben",150,10);
  t2.setTaxiDetails(4321,"Chris",250,4);
  t3.setTaxiDetails(3434,"Nick",175,2);

  t1.displayTaxiDetails();
  t2.displayTaxiDetails();
  t3.displayTaxiDetails();

  t1.calculateBill();
  t2.calculateBill();
  t3.calculateBill();
};
 