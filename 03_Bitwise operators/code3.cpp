//Pre increment, Post increment

#include<iostream>
using namespace std;

int main()
{
    int a =10;

    cout<<(++a)<<endl;
    //11 a=11
    cout<<(a++)<<endl;
    //11 a=12
    cout<<(--a)<<endl;
    //11 a=11
    cout<<(a++)<<endl;
    //1 a=12
    cout<<a<<endl;
    //12

    return 0;
}