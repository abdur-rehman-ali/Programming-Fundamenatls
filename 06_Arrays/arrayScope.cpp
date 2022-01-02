#include<iostream>
using namespace std;

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout <<" " <<arr[i];
    }
}

void twoTimesArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        arr[i] = arr[i] * 2;
    }
}

//num[0] contains starting address of array
//we pass that address to function
//so any changes made in array will be reflected everywhere 
//where we access the array

int main()
{
    int num[10] = {1,2,3,4,5,6,7,8,9,10};

    int size=10;

    cout<<"Printing array"<<endl;
    printArray(num,size);

    cout<<endl<<"Updating array"<<endl;
    twoTimesArray(num,size);

    cout<<"Printing array"<<endl;
    printArray(num,size);


}