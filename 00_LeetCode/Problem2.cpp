// 191. Number of 1 Bits

#include <iostream>
using namespace std;

int hammingWeight(uint32_t n)
{
    
    int count = 0;
    while (n != 0)
    {
        //It will check 1st bit of n
        //if it is 1 then return 1
        //if it is 0 then return 0
        if (n & 1)
        {
            count++;
            //increment if it is one
        }
        // Right shift number
        n = n >> 1;
    }
    return count;
}

int main()
{
    int n = 00000000000000000000000000001010;
    cout << hammingWeight(n);
}