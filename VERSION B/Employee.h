
using namespace std;
class Employee{
  private:
  int employeeID;
  char char employeeName[50];
  int OTHours;
  int OTRate;
  public:
  void setEmployeeDetails(int eID,  char eName[50]);
  int displayEmployeeDetails();
  void setOTHours(int OTHrs);
  void setOTRate(int OTRte);
  int calculateOTPayment();
}
