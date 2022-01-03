#include <iostream>
using namespace std;

int main()
{

    //pointer to int is created, and pointing to some garbage address
    // int *p1;

    //Best practise is to initilize pointer
    int *p2 = 0;

    //Segmentation fault as that memory location does not exist yet
    // cout << *p2 << endl;

    cout << "Example 2*************" << endl;
    int j = 5;
    int *p4 = &j;
    cout << p4 << endl;
    cout << *p4 << endl;
    int *p3 = 0;
    p3 = &j;
    cout << p3 << endl;
    cout << *p3 << endl;

    cout << "Example 3*************" << endl;
    int num = 5;
    int a = num;
    cout << "a before " << num << endl;
    a++;
    cout << "a after " << num << endl;

    int *p = &num;
    cout << "before " << num << endl;
    (*p)++;
    cout << "after " << num << endl;

    //copying a pointer
    cout << "Example 4(copy pointer)*************" << endl;
    int *q = p;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;

    cout << "Example 5*************" << endl;
    //important concept
    int i = 3;
    int *t = &i;
    //cout <<  (*t)++ << endl;
    *t = *t + 1;
    cout << *t << endl;
    cout << " before t " << t << endl;
    //Incrementing address by 1 (4 bytes as it is of type int)
    t = t + 1;
    cout << " after t " << t << endl;

    return 0;
}