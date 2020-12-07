#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    int i;
    float a;
    string s,s1;
    
    cout<<"Enter a Number :: ";
    getline(cin,s);
    
    /*
        string stream:
        It allows to extract any numeric value from string.
            eg.
                Floating numeric values
                Integer numeric values 
    */
    stringstream(s)>>i;

    cout<<"Entered Number ::"<<i<<endl;

    cout<<"Enter a Number :: ";
    getline(cin,s1);
    
    stringstream(s1)>>a;
    cout<<"Entered Number ::"<<a;

    return 0;
}