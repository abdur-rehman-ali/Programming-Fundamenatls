// 1009. Complement of Base 10 Integer
#include <iostream>
#include <math.h>
using namespace std;

int bitwiseComplement(int n)
{
    int mask = 0;
    int ans = 0;

    if (n == 0)
    {
        return 1;
    }
    int m = n;
    while (n != 0)
    {
        mask = (mask << 1) | 1;
        n = n >> 1;
    }

    ans = (~m) & mask;
    return ans;
}

int main()
{

    cout<<bitwiseComplement(5)<<endl;
    cout<<bitwiseComplement(0)<<endl;
}
