#include <iostream>
using namespace std;
main()
{  float x,y,z;
   cout<< "enter the first side of triangle";
   cin>> x;
   cout<< "enter the second side of triangle";
   cin>> y;
   cout<< "enter the third side of triangle";
   cin>> z;
   if(((x+y)>=z)&&((y+z)>=x)&&((z+x)>=y))
      cout<< "it is a valid triangle";
   else
      cout<<"it is not a valid triangle";
 }
	 

