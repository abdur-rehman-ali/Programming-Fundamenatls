//For loop without passing initialization,condition,updation

#include<iostream>
using namespace std;

int main()
{

    for(int i=0;i<5;i++)
    {
        cout<<i<<endl;
    }
    cout<<endl;
    int j=0;
    for(;;)
    {
        if(j<5)
        {
            cout<<j<<endl;
        }
        else
        {
            break;
        }
        j++;
    }
}