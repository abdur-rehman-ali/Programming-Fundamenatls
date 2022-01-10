#include <iostream>
using namespace std;

int main()
{
    char str[]= "joyia";
    char *p = str;
    cout << *p << endl;
    cout << *(p + 1) << endl;
    cout << *(p + 2) << endl;


    int arr[]= {1,2,3,4,5};
    int *p2 = arr;
    cout << *p2 << endl;
    cout << *(p2 + 1) << endl;
    cout << *(p2 + 2) << endl;
    
}

//Answer
// j
// o
// y
// 1
// 2
// 3