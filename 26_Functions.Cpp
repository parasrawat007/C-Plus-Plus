#include<iostream>
using namespace std;

/*
    User-Defined Fuction:
    return-type name-of-the-fuction(argument1, argument2,....... argumentn)
    {

        return variable;
    } 
*/

int addition (int a, int b)
{
  int r;
  r=a+b;
  return r;
}

int main()
{
    int x=5, y=3, z;

    z = addition (7,2);
    cout << "The first result is " << z << '\n';
    cout << "The second result is " << addition (7,2) << '\n';
    cout << "The third result is " << addition (x,y) << '\n';
    z= 4 + addition (x,y);
    cout << "The fourth result is " << z << '\n';
    
    return 0;
}