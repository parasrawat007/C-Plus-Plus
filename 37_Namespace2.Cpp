#include<iostream>

using namespace std;

namespace nm
{
    int val()
    {
        return 0;
    }
}
namespace bar 
{
    const double pi=3.14;
    double val()
    {
        return 2*pi;
    }
}
int main()
{
    cout<<nm::val()<<endl
        <<bar::pi<<endl
        <<bar::val();
    return 0;
}