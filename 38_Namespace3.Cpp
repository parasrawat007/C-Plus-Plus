#include<iostream>

using namespace std;
/*
    Namespaces can be split: Two segments of a code can be declared in the same namespace
*/
namespace foo { int a; }
namespace bar { int b; }
namespace foo { int c; }

int main()
{

    return 0; 
}