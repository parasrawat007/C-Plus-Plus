#include<iostream>
using namespace std;

int main()
{
    int x=100;

    //Single line if Condition
    if (x == 100)
        cout << "x is 100"<<endl;

    //Multiple line of condition
    if (x == 100)
    {
        cout << "x is ";
        cout << x;
        cout << endl;
    }

    //if else
	if (x == 100)
        cout << "x is 100";
    else
        cout << "x is not 100";

    //if else lader
    if (x > 0)
        cout << "x is positive";
    else if (x < 0)
        cout << "x is negative";
    else
        cout << "x is 0";
    
    return 0;
}