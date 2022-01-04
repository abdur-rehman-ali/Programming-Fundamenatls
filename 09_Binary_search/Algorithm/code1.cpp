#include<iostream>
using namespace std;

//1.Array should be sorted
//2.Compare key with mid value
//3.if value = mid then return index of mid
//4.if value > mid then search in right half
//5.if value < mid then search in left half
//5.if value does not exist then rerturn -1

int binarySearch(int *arr,int size,int key)
{
    int start = 0;
    int end = size-1;

    while(start<=end)
    {
        int mid = (start+end) /2;
        if(arr[mid] == key)
        {
            return mid;
        } 
        else if(key>arr[mid])
        {
            start = mid + 1;
        }
        else if(key<arr[mid])
        {
            end = mid - 1;
        }
    }

    //If value does not exist
    return -1;
}



int main()
{
    int arr [] = {10,21,31,42,53,64,75,86,97,107,171,1243};
    int size=12;
    int key = 171;

    int return_index = binarySearch(arr,size,key);

    if(return_index==-1)
    {
        cout<<"Value not found"<<endl;
    }
    else
    {
        cout<<"Value found at index "<<return_index<<endl;
    }

}