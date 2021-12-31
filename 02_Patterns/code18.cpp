//     1
//    121
//   12312
//  1234123
// 123451234

#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    int row = 1;
    while (row <= n)
    {

        //Print space
        int col1 = 1;
        while (col1 <= n - row)
        {
            cout << " ";
            col1++;
        }

        //Print numbers in left traingle
        int col2 = 1;
        while (col1 <= n)
        {
            cout <<"" << col2 ;
            col2++;
            col1++;
        }

        //Print numbers in right traingle
        int col3 = 1;
        while (col3 < row)
        {
            cout<<"" << col3 ;
            col3++;
        }

        cout << endl;
        row++;
    }
}