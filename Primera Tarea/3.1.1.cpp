#include <iostream>
using namespace std;
///////////3.1.1
int gVect[100]; // Buffer to save the elements
int gnCount;

void Insert(int elem)
{
 if( gnCount < 100 ) // we can only insert if there is space
 gVect[gnCount++] = elem; // Insert the element at the end
}
int main(int argc, char *argv[]) {

 Insert(5);
 for(int i=0; i<gnCount; i++)
 {
 cout<<gVect[i];
 }
}