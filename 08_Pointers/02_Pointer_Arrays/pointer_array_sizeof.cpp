#include <iostream>
using namespace std;

int main()
{
    int num1 = 1;
    double num2 = 2;
    float num3 = 3;
    unsigned int num4 = 4;

    cout << "Size of int " << sizeof(num1) << endl;
    cout << "Size of double " << sizeof(num2) << endl;
    cout << "Size of float " << sizeof(num3) << endl;
    cout << "Size of unsigned int " << sizeof(num4) << endl;

    short num[10] = {1, 2};
    cout << "Size of int array " << sizeof(num) << endl;
    cout << "Size of 1st index value " << sizeof(num[0]) << endl;
    cout << "Size of 1st index value " << sizeof(*num) << endl;
    cout << "Size of 1st index value " << sizeof(&num) << endl;

    short *ptr = &num[0];
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;
}