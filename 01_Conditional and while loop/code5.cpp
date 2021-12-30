#include<iostream>
using namespace std;

int main()
{
    //Store one character
    char a ;
    cout<<"Enter a character"<<endl;
    cin>>a;

    if(a>= 'a'  && a <='z')
    {
        cout<<"Lowercase";
    }
    else if(a>= 'A'  && a <='Z')
    {
        cout<<"UPPERCASE";
    }
    else if(a>= '0'  && a <='9')
    {
        cout<<"Numbers";
    }
    else
    {
        cout<<"Not alphanumeric";
    }
    

}