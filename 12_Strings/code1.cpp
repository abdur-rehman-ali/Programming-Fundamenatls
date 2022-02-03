#include<iostream>
using namespace std;

//Character array

//cin will consider tab,enter,space as start of new input
int main()
{
    char name[10];
    cout<<"Enter your name "<<endl;
    cin>>name;

    //value after space will not print
    cout<<name<<endl;

}