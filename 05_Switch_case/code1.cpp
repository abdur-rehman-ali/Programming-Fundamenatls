#include <iostream>
using namespace std;

int main()
{
    //Getting out when stuck in infinte loop in switch case statement using exit()
    while (1)
    {

        int num = 1;

        //expression in switch statement must be character or integer
        //It can not be float or string
        switch (num)
        {
        case 1:
            cout << "ONE" << endl;
            // continue;
            break;

            //Cannot use continue with switch statement
        
        case 2:
            cout << "Second" << endl;
            exit(1);
            break;
        
        default:
            cout << "Default";
            exit(1);
        }
       
    }
}