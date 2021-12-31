//Fibonacci series
//0 1 1 2 3 5 8 13 21

#include <iostream>
using namespace std;

int main()
{
    int terms;
    cin >> terms;
    cout<<endl;
    
    int n1 = 0;
    int n2 = 1;

    cout << n1 << endl
         << n2 << endl;
    for (int i = 0; i < terms; i++)
    {
        int sum = n1 + n2;
        cout << sum << endl;

        n1 = n2;
        n2 = sum;
    }
    return 0;
}