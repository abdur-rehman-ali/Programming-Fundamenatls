//1281. Subtract the Product and Sum of Digits of an Integer

#include <iostream>
using namespace std;

int subtractProductAndSum(int n);

int main()
{

    subtractProductAndSum(4421);
}

int subtractProductAndSum(int n)
{
    int product = 1;
    int sum = 0;

    while (n > 0)
    {
        product = product * (n % 10);
        sum = sum + (n % 10);
        n = n / 10;
    }

    cout << product - sum << endl;
}