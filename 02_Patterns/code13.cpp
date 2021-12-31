//A B C
//B C D
//C D E

#include <iostream>
using namespace std;

int main()
{
    int n = 3;

    int row = 0;
    
    while (row < n)
    {
        char ch = 'A' + row;
        int col = 0;
        while (col < n)
        {
            char ch1 = ch + col;
            cout<< ch1 <<" ";
            col++;
        }
        cout << endl;
        row++;
    }
}