class Vehicle{
  int vehicleID;
  char vehicleBrand[50];
  char vehicleType[50];
  int vehiclePrice;

  public:
  void setVehicleDetails(int VID,const char VB[],const char VT[],int VP);
void setVehiclePrice();
  void displayVehicleDetails();
};