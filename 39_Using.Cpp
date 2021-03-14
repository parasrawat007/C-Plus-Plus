#include<iostream>
using namespace std;

/*
    Using :
        * The keyword using introduces a name into the current declarative region (such as a block), 
          thus avoiding the need to qualify the name
*/

namespace first
{
    int x=10,y=20;
}
namespace second
{
    int x=30,y=40;
} 
int main()
{
    using first::x;                         //It introduces the mentioned variable of the namespace in thre scope
    using second::y;
    cout<<"X = "<<x<<" Y = "<<y<<endl;
    cout<<"X = "<<second::x<<" Y = "<<second::y<<endl;
    cout<<"X = "<<first::x<<" Y = "<<first::y<<endl;
    
    return 0;
}