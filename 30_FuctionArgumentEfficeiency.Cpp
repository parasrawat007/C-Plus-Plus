#include<iostream>

using namespace std;

/*    # Memory Efficiency of Functions   */

//This fuction makes copy of arguments but doesn't reflect any change orginal on argument values
void fun(string a, string b)              
{
    cout<<a<<"\t"<<b<<endl;
}

//This fuction doesn't make copy of arguments but can change orginal argument values
void fun1(string& a,string& b)             
{
    cout<<a<<"\t"<<b<<endl;
}

//This fuction neither make copy of arguments nor change argument values
void fun2(const string& a,const string& b)  
{
    cout<<a<<"\t"<<b<<endl;
}

int main()
{
    string a="Hello",b="World";
    fun(a,b);
    fun1(a,b);
    fun2(a,b);

    return 0;
}