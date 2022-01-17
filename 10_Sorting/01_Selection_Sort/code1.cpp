#include <iostream>
#include <vector>
using namespace std;

// The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.
// 1) The subarray which is already sorted. 
// 2) Remaining subarray which is unsorted.

void selectionSort(int arr[], int length)
{

    for (int i = 0; i < length - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < length ; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}

void printArray(int arr[],int length)
{
    for(int i=0;i<length;i++)
    {
        cout<<arr[i] << " ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {2,3,4,5,0,1,23,42,54,43};
    int length = sizeof(arr)/sizeof(int);
    printArray(arr,length);
    selectionSort(arr,length);
    printArray(arr,length);

}