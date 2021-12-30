#include<iostream>
using namespace std;


//Sum of even numbers till n
int main()
{
    int n;
    cout<<"Enter a number ";
    cin>>n;

    int i=2;
    int sum=0;

    while(i<=n)
    {
        sum=sum+i;
        i+=2;
    }
    cout<<sum<<endl;
    return 0;
}