
using namespace std;
class Employee{
  private:
    int employeeID;
    char employeeName[50];
    int OTHours;
    int OTRate;

  public:
    void setEmployeeDetails(int eID, const char eName[]);
    void displayEmployeeDetails();
    void setOTHours(int OTHrs);
    void setOTRate(int OTRte);
    int calculateOTPayment();
};