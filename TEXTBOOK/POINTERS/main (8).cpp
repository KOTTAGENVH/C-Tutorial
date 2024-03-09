#include<iostream>
using namespace std;

int main(){
  int count = 7;
  int *m;
  m=&count;

cout<<count<<endl;
cout<<m<<endl;
cout<<*m<<endl;
cout<<&count<<endl;

count++;

cout<<*m<<endl;
cout<<m<<endl;
return 0;
}