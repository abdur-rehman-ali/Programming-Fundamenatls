#include<iostream>
using namespace std;

//Pass by reference
//same memory block but different names

int main()
{
    int num1 = 5;
    int &num2 = num1;

    cout<<"num1 = "<<num1<<endl; //5
    cout<<"num2 = "<<num2<<endl; //5

    num1++;
    cout<<"num2 = "<<num2<<endl; //6

    num2++;
    cout<<"num1 = "<<num1<<endl; //7

}