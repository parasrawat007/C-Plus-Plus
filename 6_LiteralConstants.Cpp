#include<iostream>
using namespace std;

int main()
{
    /*
        Number System - Integer Represtation
    */

    int a=75;   //decimal
    int b=0113; //octal
    int c=0x4b; //hexadecimal

    cout<<"A = "<<a<<endl
        <<"B = "<<b<<endl
        <<"C = "<<c<<endl;
    
    /*
        Integer Suffix literals
    */
    int d=75;
    unsigned int e=75u;
    long f=75l;
    unsigned long g=75ul;
    unsigned long h=75lu;
    
    cout<<"d = "<<d<<endl
        <<"e = "<<e<<endl
        <<"f = "<<f<<endl
        <<"g = "<<g<<endl
        <<"h = "<<h<<endl;
 
    /*
        Number System - Floating Point Represantation   
    */
    
    float i=3.14159; //3.14159
    float j=6.02e23; //6.02 x 10^23
    float k=1.6e-19; //1.6  x 10^-19
    float l=3.0;     //3.0

    cout<<"i = "<<i<<endl
        <<"j = "<<j<<endl
        <<"k = "<<k<<endl
        <<"l = "<<l<<endl;
    
    /*
        Floating Suffix literals
    */
    float m =6.02e23f;      //float
    float n =6.02e23F;      //float
    long double o=3.14159l; //Long Double 
    long double p=3.14159L; //Long Double
    
    cout<<"M = "<<m<<endl
        <<"N = "<<n<<endl
        <<"O = "<<o<<endl
        <<"P = "<<p<<endl;

    return 0;
}