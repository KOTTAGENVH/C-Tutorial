class Guest{
  private:
  int guestID;
  char guestName[50];
  int ratePerDay;
  int numberOfDays;
  public: 
  void setGuestDetails(int gID,const char gN[],int rD,int nD);
  void displayGuestDetails();
  int calculateGuestBill();
};