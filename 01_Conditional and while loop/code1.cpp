#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two integers "<<endl;
    //Taking input in same line
    //Using cin we can't take input of enter,tab and space
    cin>>a>>b;

    if(a>b)
    {
        cout<<a<<" is greater than " <<b<<endl;
    }
    else if(b>a)
    {
        cout<<b<<" is greater than " <<a<<endl;
    }
    else
    {
        cout<<"Both numbers are equal"<<endl;
    }

    return 0;
}