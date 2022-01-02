//An array contain one unique element while remaining elements are in pairs
//Find unique element

#include<iostream>
using namespace std;


void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout <<" " <<arr[i];
    }
}

//XOR
// 0 ^ 0 = 0
// 1^ 1 = 0
// same_num ^ same_num  = 0
// 0^ num  = num
int findUnique(int arr[], int size)
{
    int ans=0;

    for(int i=0;i<size;i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
    
}

int main()
{
    // int num[11] = {1,2,2,3,4,5,4,3,5,6,6};
    // int num2[11] = {1,6,2,2,3,4,5,4,3,5,6};
    int num3[11] = {5 ,3, 1, 5, 1, 3, 4, 7, 4, 8, 8 };

    int size=11;

    cout<<"Printing array"<<endl;
    printArray(num3,size);

    cout<<"\nUnique element"<<endl;
    cout<<findUnique(num3,size)<<endl;

}