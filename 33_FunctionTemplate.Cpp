#include<iostream>

using namespace std;

/*
    Function Template:
        * The template parameters are a series of parameters separated by commas. 
        * These parameters can be generic template types by specifying either the class or typename keyword 
          followed by an identifier.
        * This identifier can then be used in the function declaration as if it was a regular type.
    
    Syntax:
        template <class T>
                OR
        template <typename T>

        function-declaration
*/

template <class T>
T sum (T a, T b)
{
  T result;
  result = a + b;
  return result;
}
/*
    Note:
      *without the type enclosed in angle brackets the type shall be unambiguous. 
      *If sum is called with arguments of different types, the compiler may not be able to deduce the type of T 
       automatically.
       
*/
int main()
{
  int i=5, j=6, k;
  double f=2.0, g=0.5;

  cout << sum<int>(i,j) << endl;
  cout << sum(f,g) << endl;                 //using function without <> causes Automatic type detection

  return 0;
}