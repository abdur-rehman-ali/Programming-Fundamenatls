#include <iostream>
using namespace std;

int main()
{
    char st[] = "ABCD";
    for (int i = 0; st[i] != '\0' ; i++)
    {
        cout << st[i] << *(st) + i << *(i + st) << i[st];
        cout<<endl;
    }
    return 0;
}

//Answer
// A 65 A A
// B 66 B B
// C 67 C C
// D 68 D D
