#include <iostream>
using namespace std;

int main()
{
    char str[]= "joyia";
    char *p = str;
    cout << p << endl;
    cout << (p + 1) << endl;
    cout << (p + 2) << endl;


    int arr[]= {1,2,3,4,5};
    int *p2 = arr;
    cout << p2 << endl;
    cout << (p2 + 1) << endl;
    cout << (p2 + 2) << endl;
    
}

//Answer
// joyia
// oyia
// yia
// 0x61feec ==12
// 0x61fef0 ==16
// 0x61fef4 ==04