#include <iostream>
using namespace std;

int main()
{
    int first = 6;
    int *p = &first;
    //Pointer copy
    int *q = p;
    //Increment
    (*q)++;
    cout << first << endl;
}






//Answer
//7