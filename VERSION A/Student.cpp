#include<iostream>
#include "Student.h"
using namespace std;
#include<cstring>
void Student::setStudentDetails(int sID, char const sName[50]){
  studentID=sID;
  strcpy(studentName, sName);
}
void Student:: setMarksOOC(int mOOC){
marksOOC=mOOC;
}
 int Student::getMarksOOC(){
   return marksOOC;
 }
  void Student::setMarksSPM(int mSPM){
   marksSPM=mSPM;
  }
  int Student::getMarksSPM(){
    return marksSPM;
  }
   void Student::setMarksISDM(int mISDM){
   marksISDM=mISDM;
   }
int Student::getMarksISDM(){
  return marksISDM;
}
