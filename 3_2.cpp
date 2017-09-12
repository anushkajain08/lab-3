# include <iostream>
using namespace std;
main()
{  int x,y,z,max;
   cout<<"enter the first number";
   cin>> x;
   cout<< "enter the second number";
   cin>> y;
   cout<< "enter the third number";
   cin>> z;
   if ((x>y)&&(x>z))
	  max=x;
   else if  
      ((y>x)&& (y>z))
	   max=y;
   else
        max=z;
   cout<< "maximum is"<<max;
}
