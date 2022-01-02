#include<iostream>
using namespace std;

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout <<" " <<arr[i];
    }
}


void reverseArray(int arr[],int size)
{
    int start = 0;
    int end = size-1;

    while(start<=end)
    {

        int swap = arr[start];
        arr[start] = arr[end];
        arr[end] = swap;

        start++;
        end--;
    }
}

int main()
{
    int num[11] = {1,2,3,4,5,6,7,8,9,10,2};

    int size=11;

    cout<<"Printing array"<<endl;
    printArray(num,size);

    cout<<endl<<"Updating array"<<endl;
    reverseArray(num,size);

    cout<<"Printing array"<<endl;
    printArray(num,size);

    int a=2;
    int b=3;
    cout<<endl<<"Before swappping "<<endl;
    cout<<"a " <<a <<" b "<<b<<endl;
    swap(a,b);
    cout<<endl<<"After swappping "<<endl;
    cout<<"a " <<a <<" b "<<b<<endl;

}