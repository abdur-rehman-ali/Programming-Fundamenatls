//Pattern 1 (Square pattern)

// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

#include <iostream>
using namespace std;

int main()
{
    int n = 55;

    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}