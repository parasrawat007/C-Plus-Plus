#include<iostream>
using namespace std;

int main()
{
    char a='a';             //Character Literal in single quotes
    cout<<"A = "<<a<<endl;

    /*
        Character Literal -- Escape Sequences
    */

    cout<<"New Line (\\n)       : "<<'\n'<<"Mark"<<endl
        <<"Carrige Return (\\r) : "<<'\r'<<"Mark"<<endl
        <<"Tab (\\t)            : "<<'\t'<<"Mark"<<endl
        <<"Vertical Tab (\\v)   : "<<'\v'<<"Mark"<<endl
        <<"Backspace (\\b)      : "<<'\b'<<"Mark"<<endl
        <<"Form Feed (\\f)      : "<<'\f'<<"Mark"<<endl
        <<"Alert (\\a)          : "<<'\a'<<"Mark"<<endl
        <<"Single Quote (\\')   : "<<'\''<<"Mark"<<endl
        <<"Double Quote (\\" "\")  : "<<'\"'<<"Mark"<<endl
        <<"Question Mark (\\?) : "<<'\?'<<"Mark"<<endl
        <<"BackSlash (\\\\)       : "<<'\\'<<"Mark"<<endl<<endl;
        
    cout<<"String Can " "Be " "Concatenated Like This"<<endl<<endl; //String Can Be Concatenated Like This

    // Line Contruction Character string can also be written in two lines by using     
    cout<<"string can also be written \     
in two lines in the code by using (\\)"<<endl; //Note : After using \ comment is not allowed  

    cout<<"string next line with space \     
        example (\\)";                   //in the next lines if spaces are give in the begining they are counted as space in string  
    
    return 0;
}