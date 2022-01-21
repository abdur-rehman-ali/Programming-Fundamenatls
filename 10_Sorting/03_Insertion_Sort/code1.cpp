#include <iostream>

using namespace std;

// https://www.geeksforgeeks.org/insertion-sort/

void insertionSort(int *arr, int size)
{
    for (int i = 1; i <= size - 1; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (arr[j] > temp && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[++j] = temp;
    }
}

void printArray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {2, 3, 4, 5, 0, 1, 23, 42, 54, 43};
    int length = sizeof(arr) / sizeof(int);
    printArray(arr, length);
    insertionSort(arr, length);
    printArray(arr, length);
}