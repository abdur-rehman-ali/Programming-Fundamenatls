#include<iostream>
using namespace std;

int main()
{

    int arr[10] = {1,2};
    //In case of integer array,
    //name of array store address of value at 0 index
    cout<<"Integer array :" <<arr<<endl;

    char ch[4] = "ali";
    //In case of character array,
    //name of array will print entire character till it find '\0'
    cout<<"Character array :" <<ch<<endl;
    cout<<"Character array :" <<*ch+1<<endl;
    cout<<"Character array :" <<&ch<<endl;
    cout<<"Character array :" <<ch+1<<endl;

    char *c = &ch[0];
    cout<<c<<endl;

    // Not recommended
    char temp = 'z';
    char *p = &temp;

    cout << p << endl;

}