#include <iostream>
using namespace std;

main()
{
  char x;
  cout << "enter any character";
  cin  >> x;
  if ((x>= 'a') && ('z'>= x) || (x>= 'A') && ('Z' >=x))
     cout<< "x is an alphabet";
  else if (('9'>= x) && (x>= '0'))
     cout<< "character is a digit";
  else cout<<"it is a special character";
}
