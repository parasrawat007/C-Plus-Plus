#include<iostream>
#include<limits>
using namespace std;

int main()
{
    // Input in Strings 
    string s;
    
    // Get line : It stores entire string including whitespaces, tabs, new-line
    cout<<"Enter String :: ";
    getline(cin,s);
    cout<<"Entered String :: "<<s<<endl;

    return 0;
}