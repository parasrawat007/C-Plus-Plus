#include<iostream>
using namespace std;
int main()
{
    /*
        switch case :
            It is equivalent to if else ladder but here condion is always ==.
            switch (expression)
            {
                case constant1:
                    group-of-statements-1;
                break;

                case constant2:
                    group-of-statements-2;
                break;
                .
                .
                .
                default:
                default-group-of-statements;
            }
    */
    int x=1;
    
    switch (x) 
    {
        case 1:
          cout << "x is 1";
        break;

        case 2:
          cout << "x is 2";
        break;
        
        default:
          cout << "value of x unknown";
    }
    
    //If some cases has same fuctionality they can be writen like this 
    switch (x) 
    {
        case 1:
        case 2:
        case 3:
          cout << "x is 1, 2 or 3";
        break;
    
        default:
          cout << "x is not 1, 2 nor 3";
    }

    return 0;
}
