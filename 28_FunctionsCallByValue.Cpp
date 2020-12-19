#include <iostream>
using namespace std;

/*
  Call by Value:
  It is means fuction will make of the variable passed in arguments copy and then
  use them.
*/

void duplicate (int a, int b, int c)
{
  a=2;
  b=2;
  c=2;
}


int main ()
{
  int x=1, y=3, z=7;
  
  cout<<"Values before fuction call :: "<<endl;
  cout << "x=" << x << ", y=" << y << ", z=" << z<<endl;

  
  duplicate (x, y, z);
  cout<<"Values before fuction call :: "<<endl;
  cout << "x=" << x << ", y=" << y << ", z=" << z<<endl;
  return 0;
}