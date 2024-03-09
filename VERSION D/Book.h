class Book{
  private:
  int bookID;
  char bookName[50];
  char author[50];

  public:
  void setBookDetails(int bID, const char bN[], const char a[]);
 void setBookID(int i);
  void displayBookDetails();
};