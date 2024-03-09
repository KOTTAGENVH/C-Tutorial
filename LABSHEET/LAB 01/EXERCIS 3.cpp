#include<iostream>
using namespace std;
int main(){
  int number;
  int i;
  cout<<"Enter number : ";
  cin>>number;
  cout<<"\nMultiplication table\n\n";
  for(i=0;i<=12;i++){
    cout<<" "<<number<<"*"<<" "<<i<<"="<<" "<<number*i<<endl;
  }
  return 0;
}
