#include <iostream>
using namespace std;

//check whether number is prime or not
// If number is divisible by any number less than it, 
// then it is not prime
 
int main()
{
    int n;
    cin >> n;

    int i = 2;

    bool prime = true;
    while (i < n)
    {
        if (n % i == 0)
        {
            prime = false;
            break;
        }
        i++;
    }

    if (prime)
    {
        cout << n << " " << endl;
    }
}