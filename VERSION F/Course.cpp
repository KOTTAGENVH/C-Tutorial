#include<iostream>
#include <cstring>
#include "Course.h"
using namespace std;


	void Course::setCourseDetails(int cID, const char cName[], int cp){
		courseID=cID;
		strcpy(courseName,cName);
		creditPoints=cp;
		
		}
	void Course::displayCourseDetails(){
		cout<<"course ID = "<<courseID<<endl;
		cout<<"courseName = "<<courseName<<endl;
		cout<<"creditPoints = "<<creditPoints<<endl;
	}
		void Course::setCreditPoints(){
			cout<<"Input new"<<courseName<<"credit points: "<<endl;
			cin>>creditPoints;
		}
	
