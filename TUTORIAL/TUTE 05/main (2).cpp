#include<iostream>
using namespace std;
int main(){
  float num1;
  float num2;
  cout<<"Pls enter a number :"<<endl;
  cin>>num2;
  float *fPtr;
  float*mPtr;
  fPtr=&num1;
  mPtr=&num2;
num1=num1+7.8;
num2=num2-14.2;
cout<<*fPtr<<endl;
cout<<*mPtr<<endl;
}