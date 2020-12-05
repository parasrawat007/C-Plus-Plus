#include<iostream>
using namespace std;

int main()
{
    float value=1.23;
    int a=int(value);   //Explicit Conversion
    int b=(int) value;  //Explicit Conversion

    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}