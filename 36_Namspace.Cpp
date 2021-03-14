#include<iostream>

using namespace std;
/*
    Namespace:
        *Namespaces allow us to group named entities that otherwise would have global scope into narrower scopes, 
         giving them namespace scope. 
        *This allows organizing the elements of programs into different logical scopes referred to by names.
        *Where identifier is any valid identifier and named_entities is the set of variables, 
         types and functions that are included within the namespace.

    Syntax:
        namespace identifier
        {
            named_entities
        }
*/
namespace myNamespace
{
  int a=10, b=20;
}

int main()
{
    /*
        * These variables can be accessed from within their namespace normally, with their identifier (either a or b), 
          but if accessed from outside the myNamespace namespace they have to be properly qualified with the scope 
          operator ::. 
        * For example, to access the previous variables from outside myNamespace they should be qualified like:
            myNamespace::a
            myNamespace::b 
    */
    cout<<"A = "<<myNamespace::a<<endl  
        <<"B = "<<myNamespace::b; 
    return 0;
}