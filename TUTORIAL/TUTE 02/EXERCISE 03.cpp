#include <iostream>
using namespace std;
int main()
{
  int no;
  long fac;
  
  cout<<"Enter a Number : ";//prompt user input
  cin>>no;//read user input
  fac = 1;
  for(int r=no; r >= 1; r--){
    fac = fac * r;
  }
  cout<<"Factorial of"<<no <<"is" <<fac<<endl;
}
