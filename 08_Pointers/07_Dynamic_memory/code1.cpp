#include <iostream>

using namespace std;

// syntax
// datatype* variable_name = new datatype
// left side store in stack
// right side store in heap

int main()
{
    int *num1 = new int;
    *num1 = 1;
    cout << "Value store at num1 = " << *num1 << endl;
    cout << "Size of num1 pointer = " << sizeof(num1) << endl;
    cout << "Size of value store at num1 = " << sizeof(*num1) << endl
         << endl;

    double *num2 = new double;
    *num2 = 2;
    cout << "Value store at num1 = " << *num2 << endl;
    cout << "Size of num1 pointer = " << sizeof(num2) << endl;
    cout << "Size of value store at num2 = " << sizeof(*num2) << endl
         << endl;

    short *num3 = new short;
    *num3 = 3;
    cout << "Value store at num1 = " << *num3 << endl;
    cout << "Size of num1 pointer = " << sizeof(num3) << endl;
    cout << "Size of value store at num3 = " << sizeof(*num3) << endl
         << endl;
}