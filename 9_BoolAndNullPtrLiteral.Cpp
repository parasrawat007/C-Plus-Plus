#include<iostream>
using namespace std;
int main()
{
    bool a=true;
    bool b=false;
    
    cout<<a<<endl
        <<b<<endl;
    
    int *p;
    cout<<"*p = "<<*p<<endl
        <<"p  = "<<p<<endl<<endl;

    int *q= NULL;                   
    cout<<"*q = "<<*q<<endl         //Segmentaion Fault : Unable to access pointed location
        <<"q  = "<<q<<endl<<endl;
    
    int *r= nullptr;                    
    cout<<"*r = "<<*r<<endl         //Segmentaion Fault : Unable to access pointed location
        <<"r  = "<<r<<endl<<endl;
    //Ab normal Execution Of Program
    return 0;
}