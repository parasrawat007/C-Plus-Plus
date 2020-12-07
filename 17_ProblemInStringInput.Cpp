#include<iostream>
#include<limits>
using namespace std;

int main()
{
    // Input in Strings 
    string s;
    cout<<"Enter String :: ";
    /* 
        Cin : 
        It ignores string after whitespaces, tabs, new-line and stores only first group of characters 
        and it does't clear the buffer value 
    */
    cin>>s;                            
    cout<<"Entered String :: "<<s<<endl;

    /*
        cin.ignore:
        It is used to clear buffer value it is same as fflush
    */
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    
    
    cout<<"Enter String :: ";
    getline(cin,s);
    cout<<"Entered String :: "<<s<<endl;

    return 0;
}