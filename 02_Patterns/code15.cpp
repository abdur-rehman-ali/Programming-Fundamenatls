//D
//C D
//C B D 
//A B C D

#include <iostream>
using namespace std;

int main()
{
    int n = 26;

    int row = 0;

    while (row < n)
    {

        int col = 0;
        int count = 0;
        //Get statrting character
        char ch = 'A' + (n-1) - row;
        while (col <= row)
        {
            //Keep on incrementing that character to get next characters
            char ch1 = ch + count;
            cout << ch1<< " ";
            col++;
            count++;
        }
        cout << endl;
        row++;
    }
}