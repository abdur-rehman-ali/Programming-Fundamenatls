//Hexadecimal to binary

// Reverse digits   
// ans = digit * 10^i + ans
// 1,2,3
// ans =321

//Cobine digit in forward order
// ans = ans * 10 + digit
// 1,2,3
// 123

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num = 12;

    int ans = 0;
    int j = 0;
    while (num != 0)
    {
        int bit = num & 1;
        ans = bit * pow(10, j)  + ans;
        j++;
        num = num >> 1;

    }

    cout << ans;
}

