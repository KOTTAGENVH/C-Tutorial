class Course{
	private:
	int courseID;
	char courseName[50];
	int creditPoints;
	
	public:
		void setCourseDetails(int cID, const char cName[], int cp);
		void displayCourseDetails();
		void setCreditPoints(); 
};