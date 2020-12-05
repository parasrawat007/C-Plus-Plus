#include<iostream>
using namespace std;

int main()
{
    /*
        Raw String:
        It is used For Ignoring an Escape Sequnce in a String.

        Syntax:
            string  var_name = R"( #expression# )";
            string  var_name = u8"( #expression# )"; //Utf-8 Sequnce 
    */
    string a =R"(abc\nABC)";
    cout<<a;

    return 0;
}