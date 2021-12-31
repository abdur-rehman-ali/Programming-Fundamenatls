#include<iostream>
using namespace std;

int main()
{

    int a=1,b=2;

    //a=1 ,b=3 
    if(a-->0 && ++b>2)
    {
        cout<<"Inside if"<<endl;
    }
    else{
        cout<<"Inside else";
    }

    cout<<a<<endl<<b<<endl;
    //a = 0 , b= 3
}