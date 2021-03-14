#include<iostream>
using namespace std;

/* 
    * using and using namespace have validity only in the same block in which they are stated or in the entire 
      source code file if they are used directly in the global scope.
    
    #For using entire namespace 
        Syntax:
            using namespace name;
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
    using namespace first;
    cout<<"X = "<<x<<" Y = "<<y;
    cout<<"X = "<<second::x<<" Y = "<<second::y;
    return 0;
}