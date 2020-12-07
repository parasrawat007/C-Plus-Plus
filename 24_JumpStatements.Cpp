#include<iostream>
using namespace std;

int main()
{
    //Break: It is used to exit a loop
    for (int n=10; n>0; n--)
    {
        cout << n << ", ";
        if (n==3)
        {
            cout << "countdown aborted!";
            break;
        }
    }
    
    //Continue : It is used to skip a single itration of loop
    for (int n=10; n>0; n--) 
    {
        if (n==5) continue;
        cout << n << ", ";
    }
    cout << "liftoff!\n";
    
    //Goto : It is used to jump to a point of a program
    int n=10;
    
    mylabel:
    cout << n << ", ";
    n--;
    if (n>0) goto mylabel;
        cout << "liftoff!\n";
    
    return 0;
}