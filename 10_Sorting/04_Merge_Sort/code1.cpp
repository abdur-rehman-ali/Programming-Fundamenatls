#include <iostream>

using namespace std;

void printArray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int *arr, int start, int end)
{
    int mid = (start + end) / 2;

    int m = mid - start + 1;
    int n = end - mid;

    int *arr1 = new int[m];
    int *arr2 = new int[n];

    //Copy values in arr1

    int mainIndex = start;
    for (int i = 0; i < m; i++)
    {
        arr1[i] = arr[mainIndex++];
    }
    mainIndex = mid + 1;
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr[mainIndex++];
    }
    

    //Merge two sorted arrays

    int index1 = 0;
    int index2 = 0;
    mainIndex = start;
    while (index1 < m && index2 < n)
    {
        if (arr1[index1] < arr2[index2])
        {
            arr[mainIndex++] = arr1[index1++];
        }
        else
        {
            arr[mainIndex++] = arr2[index2++];
        }
    }

    //Copy remaning values
    while (index1 < m)
    {
        arr[mainIndex++] = arr1[index1++];
    }

    while (index2 < n)
    {
        arr[mainIndex++] = arr2[index2++];
    }

    delete []arr1;
    delete []arr2;
}

void mergeSort(int *arr, int start, int end)
{
    //base case

    if (start >= end)
    {
        return;
    }

    int mid = (start + end) / 2;

    //Sort left part of array
    mergeSort(arr, start, mid);
    //Sort right part of array
    mergeSort(arr, mid + 1, end);
    //Then merge the both sorted parts
    merge(arr, start, end);
}



int main()
{
    int arr[] = {2, 3, 4, 5, 0, 1, 23, 42, 54, 43};
    int length = sizeof(arr) / sizeof(int);
    printArray(arr, length);
    mergeSort(arr,0,length-1);
    printArray(arr, length);
}