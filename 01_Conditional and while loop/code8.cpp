//Print prime numbers till n

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number :";
    cin >> num;

    int n = 2;

    cout<<"Printing prime numbers till "<<num<<endl;
    while (n <= num)
    {

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
            cout << n << " " ;
        }

        n++;
    }
}