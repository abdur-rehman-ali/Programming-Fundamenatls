//A B C
//D E F
//G H I

#include <iostream>
using namespace std;

int main()
{
    int n = 3;

    int row = 0;
    char ch = 'A';
    int count = 0;
    while (row < n)
    {
        int col = 0;

        while (col < n)
        {
            ch = 'A' + count;
            cout << ch << " ";
            count++;
            col++;
        }
        cout << endl;
        row++;
    }
}