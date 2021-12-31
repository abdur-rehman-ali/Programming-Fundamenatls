//A A A
//B B B
//C C C


#include <iostream>
using namespace std;

int main()
{
    int n = 26;

    int row = 0;
    while (row < n)
    {
        int col=0;
        char ch = 'A' + row;
        while (col < n)
        {
            cout <<  ch <<" ";
            col++;
        }
        cout << endl;
        row++;
    }
}