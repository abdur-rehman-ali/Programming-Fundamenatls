#include <iostream>
using namespace std;

int main()
{
    int *p = 0;
    int first = 110;
    *p = first;
    cout << *p << endl;
}






//Answer
//Segmentation fault as no memory is assigned to p