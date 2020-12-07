#include<iostream>
using namespace std;

int main()
{
    /*
        forloop:
        for (Declaration and Initialization of variable ; Condition ; Increment/Decrement) 
        {
            statements;
        }
        
        for (Initialization of variable ; Condition ; Increment/Decrement) 
        {
            statements;
        }
    */
    for (int n=10; n>0; n--) 
    {
        cout << n << ", ";
    }
    cout << "liftoff!\n";
    
    return 0;
}