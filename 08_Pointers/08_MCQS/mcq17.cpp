#include <iostream>
using namespace std;

int main()
{
     char arr[] = "abcde";
     //Will point to some garbage address and then start printing from there
    char *p = &arr[9];
    //It will print values til it find terminating characer i.e. /0
    cout << p << endl;
}

//Answer
// Garbage values