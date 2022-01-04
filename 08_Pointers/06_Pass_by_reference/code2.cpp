#include <iostream>
using namespace std;

//Value passed by reference
void update(int &num1)
{
    num1 += 1;
}

int main()
{
    int num1 = 5;

    cout << "Before going to function " << endl;
    cout << "num1 = " << num1 << endl; //5

    update(num1);

    cout << "After return from function " << endl;
    cout << "num1 = " << num1 << endl; //6
}