#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
	
	ofstream myfile;
	myfile.open("abc.txt");
	myfile <<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)
myfile.close();

   cout<<endl<<endl;
 
   return 0;
}
