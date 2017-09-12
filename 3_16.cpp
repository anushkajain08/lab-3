#include <iostream>
using namespace std;
main()
{  float a,b,c;
   cout<< "enter the first number";
   cin>> a;
   cout<< "enter the second number";
   cin>> b;
   cout<< "enter the third number";
   cin>> c;
   if (a==b==c)
      cout<< "triangle is equilateral";
   else if ((a==b)||(b==c)||(c==a))
      cout<< "triangle is isoceles";
   else
      cout<< "triangle is scalene";
}

