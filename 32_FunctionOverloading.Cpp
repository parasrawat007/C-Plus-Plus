#include<iostream>
using namespace std;

/*
    Function Overloading
        Two different functions can have the same name if
          They have a different number of parameters
          Any of their parameters are of a different type
*/
double opreation()
{
    return 0;
}

double opreation(int a, int b)
{
    return a+b;
}
double opreation(int a, int b,int c)
{
    return a+b+c;
}
double opreation(double a, int b)
{
    return a-b;
}
double opreation(int a, double b)
{
    return a*b;
}
double opreation(double a, double b)
{
    return a/b;
}

/*
    #Note:
        * This function doesn't work because it has same function argument like previously declared fuction.
        * Function over loading doesn't consider diffrent return type so the compiler find the functions same.

    int opreation(double a, double b)
    {
        return a/b;
    }
*/
int main()
{
    cout<<opreation()<<endl
        <<opreation(1,2)<<endl
        <<opreation(3.0,4)<<endl
        <<opreation(4,5,6)<<endl
        <<opreation(10.0,20.0)<<endl
        <<opreation(4,2.0)<<endl;
}