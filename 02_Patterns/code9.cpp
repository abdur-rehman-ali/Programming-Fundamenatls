//1
//2 1
//3 2 1
//4 3 4 1
//5 4 3 2 1

#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    int row = 1;
    while (row <= n)
    {
        int col = row;
        while (col > 0)
        {
            cout << (col) << " ";
            col--;
        }
        cout << endl;
        row++;
    }
}