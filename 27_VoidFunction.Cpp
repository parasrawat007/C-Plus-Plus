#include <iostream>
using namespace std;

//void function
void printmessage ()
{
  cout << "I'm a function!";
}

/*
    Only the main fuction is allowed to not to have return statement in its defination 
    else it is compulsory to write return in fuction which has non-void return type in 
    its declaration.
*/
int main ()
{
  printmessage ();
}