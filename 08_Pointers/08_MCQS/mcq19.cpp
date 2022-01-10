#include <iostream>
using namespace std;

int main()
{
    char str[]= "joyia";
    char *p = str;
    cout << str[0] << " " << p[0] << endl;
    cout << str[0] << " " << *p << endl;
    cout << str[0] << " " << p << endl;
}

//Answer
//j j
//j j
//j joyia