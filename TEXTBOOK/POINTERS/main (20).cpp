#include <iostream>
using namespace std;
int main(){
//Declaring an integer array of 10 elements
int *k;
k = new int [10]; //an array of 10 integers
if (!k){
cout << "Cannot Allocate Memory" << endl;
exit(1);
}
delete [] k;
}
