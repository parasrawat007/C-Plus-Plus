#include<iostream>

using namespace std;

template <class T,class U>
bool are_equal(T a,U b)
{
    return (a==b);
}
 
int main()
{
    if(are_equal(10,10.0))
    {
        cout<<"Equal";
    }
    else
    {
        cout<<"Not Equal";
    }
   /*
    Note:
      
        this example uses automatic template parameter deduction in the call to are_equal:
                are_equal(10,10.0)
        Is equivalent to:
                are_equal<int,double>(10,10.0)
      
        *There is no ambiguity possible because numerical literals are always of a specific type: 
            *Unless otherwise specified with a suffix, integer literals always produce values of type int, 
                and floating-point literals always produce values of type double. 
            *Therefore 10 has always type int and 10.0 has always type double.
    */
    return 0;
}