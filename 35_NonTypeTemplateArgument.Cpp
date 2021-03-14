#include<iostream>

using namespace std;

template <class T, int n>
int fun(T a)
{
    return a*n;
}

int main()
{
    /*
        The template parameters can not only include types introduced by class or typename, but can also include
        expressions of a particular type.
    */
    cout<<fun<int,3>(5);
    return 0;
}