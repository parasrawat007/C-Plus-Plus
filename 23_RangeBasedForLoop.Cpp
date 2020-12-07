#include<iostream>
using namespace std;

int main()
{
    string s("abcd");

    /*
        Range Based For:
        for(Varibale Declaration : Range)
        {
            statements;
        }
    */

    for (char c : s)
    {
     cout << "[" << c << "]";
    }
    cout << '\n';
    
    return 0;
}