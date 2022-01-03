#include<iostream>

using namespace std;

void update(int *ptr)
{
    cout<<"Derefrencing ptr "<<*ptr<<endl; //5
    *ptr = *ptr+1;
    cout<<"Derefrencing ptr "<<*ptr<<endl; //6
}

int main()
{
    int num= 5;
    int *ptr = &num;

    cout<<"Derefrencing ptr "<<*ptr<<endl; //5
    cout<<"Value of ptr " <<ptr<<endl;     //address1
    cout<<"Address of ptr " <<&ptr<<endl;   //address2

    //incrementing value using function
    cout<<"Going inside function"<<endl<<endl;
    update(ptr);
    cout<<"Came out of function"<<endl<<endl;

    cout<<"Derefrencing ptr "<<*ptr<<endl; //6
    cout<<"Value of ptr " <<ptr<<endl;      //address1
    cout<<"Address of ptr " <<&ptr<<endl;// address2


}