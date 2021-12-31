#include <iostream>
using namespace std;

int main()
{

    int a, b = 1;
    a = 10;
    if (++a)
    {
        cout<<"If executed"<<endl;
        cout << b << endl;
    }
    else
    {
        cout << (++b) << endl;
    }
}