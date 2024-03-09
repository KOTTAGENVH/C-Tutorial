#include<iostream>
#include "Course.h"
using namespace std;

int main(){
	Course c1, c2, c3, c4;
	
   c1.setCourseDetails(1050,"OOC", 2);
   c2.setCourseDetails(1060,"SPM",3);
   c3.setCourseDetails(1100,"IWT",4);
   c4.setCourseDetails(1090,"ISDM",4);
   
   c1.setCreditPoints();
   c2. setCreditPoints();
   c3. setCreditPoints();
   c4. setCreditPoints();
   
   	c1.displayCourseDetails();
   	c2.displayCourseDetails();
   	c3.displayCourseDetails();
	c4.displayCourseDetails();
   return 0;
}