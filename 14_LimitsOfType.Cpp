#include<iostream>
#include<limits>
using namespace std;

int main()
{
    numeric_limits<int> n;

    cout<<"Min = "<<n.min()<<endl
        <<"Max = "<<n.max()<<endl
        <<"Digits = "<<n.digits<<endl;
        
    return 0;
}