class Taxi{
  private:
  int taxiID;
  char driver[50];
  int ratePerKM;
  int distanceTravelled;
  
  public:
  void setTaxiDetails(int tID,const char d[],int rPKM,int dt);
  void displayTaxiDetails();
  int calculateBill();
};