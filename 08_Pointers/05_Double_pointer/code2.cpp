#include<iostream>

using namespace std;


int main()
{
    int num= 5;
    int *ptr = &num;

    cout<<"Derefrencing ptr "<<*ptr<<endl; //5
    cout<<"Value of ptr " <<ptr<<endl;     //address1
    cout<<"Address of ptr " <<&ptr<<endl;   //address2

    //incrementing value
    *ptr = *ptr + 1;

    cout<<"Derefrencing ptr "<<*ptr<<endl; //6
    cout<<"Value of ptr " <<ptr<<endl;      //address1
    cout<<"Address of ptr " <<&ptr<<endl;// address2


}