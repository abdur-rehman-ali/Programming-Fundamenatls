#include<iostream>

using namespace std;

int main()
{
    int num = 5;
    int *ptr =&num;
    int **dbptr = &ptr;

    cout<<"Value of num " << num<<endl;
    cout<<"Address of num " << &num<<endl;
    cout<<"Value of ptr " << ptr<<endl;
    cout<<"Address of ptr " << &ptr<<endl;
    cout<<"Value of dbptr " << dbptr<<endl;
    cout<<"Derefrencing of dbptr " << *dbptr<<endl;
    cout<<"Derefrencing of dbptr 2 times " << **dbptr<<endl;
    cout<<"Addredss of dbptr " << &dbptr<<endl;

}