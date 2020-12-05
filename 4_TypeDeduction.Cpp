#include<iostream>
using namespace std;

int main()
{
    int a=10;
    
    /*
        #auto
            *Automatic Type Detection during the initialization
            *Used When varidable is required to initialized
    */
    auto b=a; // same as int b=a;

    /*
        #decltype
            *Manual Type Detection without Initializaing the Variable
            *Used when Variable is not required to initializaed
    */

    decltype (a) c;

    cout<<"A ="<<a<<endl
        <<"B ="<<b<<endl
        <<"C ="<<c<<endl; 


    return 0;
}