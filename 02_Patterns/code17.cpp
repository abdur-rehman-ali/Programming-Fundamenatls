// 1111
//  222
//   33
//    4

#include<iostream>
using namespace std;

int main()
{
    int n=4;

    int row=0;
    while(row<n)
    {
        int col = 0;
        while(col<n)
        {
            if(col < row)
            {
                cout<<" ";
            }
            else
            {
                cout<<row+1;
            }
            col++;
        }

        cout<<endl;
        row++;
    }
}