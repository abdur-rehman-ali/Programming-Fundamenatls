//1 2 3
//4 5 6
//7 8 9

#include <iostream>
using namespace std;

int main()
{
    int n = 3;

    int i = 0;

    while (i < n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << ((3 * i) + j) << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}