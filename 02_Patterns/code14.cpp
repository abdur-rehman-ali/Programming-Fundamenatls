//D
//D C
//D C B
//D C B A

#include <iostream>
using namespace std;

int main()
{
    int n = 26;

    int row = 0;

    while (row < n)
    {

        int col = 0;
        int count = n-1;
        while (col <= row)
        {
            char ch = 'A' + count;
            cout << ch<< " ";
            col++;
            count--;
        }
        cout << endl;
        row++;
    }
}