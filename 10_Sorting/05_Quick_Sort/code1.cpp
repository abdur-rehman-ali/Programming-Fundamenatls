#include <iostream>
#include <vector>
using namespace std;

void printArray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int *arr, int start, int end)
{
    int partition_value = arr[start];

    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] < partition_value)
        {
            count++;
        }
    }
    int partitionIndex = start + count;
    swap(arr[start], arr[partitionIndex]);

    int i = start;
    int j = end;

    while (i < partitionIndex && j > partitionIndex)
    {
        while (arr[i] <= arr[partitionIndex])
        {
            i++;
        }
        while (arr[j] > arr[partitionIndex])
        {
            j--;
        }

        if (i < partitionIndex && j > partitionIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return partitionIndex;
}

void quickSort(int *arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    //Do partition
    int p = partition(arr, start, end);
    //Sort left part
    quickSort(arr, start, p - 1);
    //Sort right part
    quickSort(arr, p + 1, end);
}

int main()
{
    int arr[] = {2, 3, 4, 5, 0, 1, 23, 42, 54, 43};
    int length = sizeof(arr) / sizeof(int);
    printArray(arr, length);
    quickSort(arr, 0, length - 1);
    printArray(arr, length);
}