//    *
//   **
//  ***
// ****

#include<iostream>
using namespace std;

int main()
{
    int n=14;

    int row=1;
    while(row<=n)
    {
        int col = 1;
        while(col<=n)
        {
            if(col <= n-row)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
            col++;
        }
        cout<<endl;
        row++;
    }
}