#include <iostream>
#include"Employee.h"
#include<string.h>
using namespace std;

int main(){
  Employee e1, e2;
 e1.setEmployeeDetails(1111, "Nimal");
 e1.setOTRate(100);
 e1.setOTHours(22);

 e2.setEmployeeDetails(2222,"Sunil");
 e2.setOTRate(200);
 e2.setOTHours(18);

 e1.calculateOTPayment();
 e2.calculateOTPayment();


return 0;
}