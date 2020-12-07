#include<iostream>
using namespace std;

int main()
{
     /*
        dowhile:
        do
        {
            statements;
        }while(condition)
    */

    string str;
    do 
    {
    cout << "Enter text: ";
    getline (cin,str);
    cout << "You entered: " << str << '\n';
    } while (str != "goodbye");

    return 0;
}