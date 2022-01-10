#include <iostream>
using namespace std;

void update(int *p)
{
    int a = 7;
    p = &a;
    *p = (*p) * (*p);
    cout << a << endl;
}

int main()
{
    int a = 7;
    update(&a);
    cout << a << endl;
}

//ANSWER
// 49
// 7