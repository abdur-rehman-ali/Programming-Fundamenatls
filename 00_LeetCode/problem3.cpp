// 7. Reverse Integer

#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int reverse(int n)
{

    int answer = 0;
    int i = 0;

    while (n != 0)
    {
        int digit = n % 10;
        if ((answer > INT_MAX / 10) | (answer < INT_MIN / 10))
        {
            return 0;
        }
        answer = answer * 10 + digit;
        i++;
        n = n / 10;
    }
    return answer;
}

int main()
{
    cout << reverse(1534236469) << endl;
    return 0;
}