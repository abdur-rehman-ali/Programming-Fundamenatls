//4 3 2 1
//4 3 2 1
//4 3 2 1
//4 3 2 1


#include<iostream>
using namespace std;

int main()
{
    int n=15;

    int i=1;
    while(i<n)
    {
        int j=n-1;
        while(j>0)
        {
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
}