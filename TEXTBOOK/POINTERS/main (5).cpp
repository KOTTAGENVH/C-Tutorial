#include<iostream>
using namespace std;
int main(){
//Declaring an integer Variable and initializing to 87
int *p;
p = new int (87); //Initializes to 87. That is *p is 87
if (!p){ // check whether memory was allocated
cout << "Cannot Allocate Memory" << endl;
exit(1);
}
}
