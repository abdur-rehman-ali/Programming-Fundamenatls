#include <iostream>
using namespace std;

int main()
{
     char arr[] = "abcde";
    char *p = &arr[2];
    //It will print values til it find terminating characer i.e. /0
    cout << p << endl;
}

//Answer
//cde 