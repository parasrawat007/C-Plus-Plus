#include<iostream>

using namespace std;

/*

    Recursive Function:
        When a fuction call it self untill a cparticular condition is satisfied it is called recursive fuction.
*/

//Program To Calculate Factorial
long factorial (long a)
{
  if (a > 1)
   return (a * factorial (a-1));
  else
   return 1;
}

int main()
{
  long number = 3;
  cout << number << "! = " << factorial (number);
  return 0;
}