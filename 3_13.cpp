# include <iostream>
using namespace std;
main ()
{ int k,a,b,c,d,e,f,g,h,t,u,v,w,x,y,z;
  cout<< "enter any amount";
  cin>>k; 
  b=k%2000; 
  z=k/2000;
  c= b%500;
  y=b/500;
  x=c/100;
  d= c%100;
  e= d%50;
  w= d/50;
  f= e%20; 
  v=e/20;
  g= f%10;
  u= f/10;
  h= g%5;
  t= g/5;
  a= t+u+v+w+x+y+z;
  cout<< "no of notes of the given amount are"  <<a;

}


