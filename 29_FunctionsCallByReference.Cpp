#include <iostream>
using namespace std;

/*
  Call by refrence:
  It is means fuction which will directly use the variable (by using memory location) 
  without making their copy.

  Passing variable by refrence can be done by either using * or & in fuction 
  declaration.

*/

void duplicate (int& a, int& b, int& c)
{
  a*=2;
  b*=2;
  c*=2;
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