//A B C
//A B C
//A B C


#include <iostream>
using namespace std;

int main()
{
    int n = 26;

    int row = 0;
    while (row < n)
    {
        int col=0;
    
        while (col < n)
        {
            char ch = 'A' + col;
            cout <<  ch <<" ";
            col++;
        }
        cout << endl;
        row++;
    }
}