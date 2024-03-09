#include<iostream>
#include <iomanip>
using namespace std;

void findMarks(int m1,int m2,float &tca1,float &tca2);
struct Marks{
  int student;
  int mrk1;
  int mrk2;
  float CA1;
  float CA2;
};
int main()
{
  Marks d1[5];
  for(int i= 0;i<5;i++)
  {
    cout<<"Enter Mark 1:";
    cin>>d1[i].mrk1;

    cout<<"Enter Mark 2:";
    cin>>d1[i].mrk2;

    d1[i].student = i + 1;
   
    findMarks(d1[i].mrk1,d1[i].mrk2,d1[i].CA1,d1[i].CA2);
  }
  cout<<endl;
  cout<<"Student\tMark1\tMark2\tCA1\tCA2"<<endl;

  for(int j=0;j<5;j++){
    cout<<d1[j].student<<"\t"<<d1[j].mrk1<<"\t"<<d1[j].mrk2<<"\t"<<fixed<<showpoint<<setprecision(2)<<d1[j].CA1<<"\t"<<d1[j].CA2<<endl;
  }

  return 0;
}

void findMarks(int m1, int m2,float &tca1,float &tca2)
{
  tca1=m1*(20/100.0);
  tca2=m2*(30/100.0);
}
