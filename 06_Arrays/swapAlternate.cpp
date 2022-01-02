#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
}

void swapAlternate(int arr[],int size)
{
    int start1=0;
    int start2=1;

    int noOfTimesLoop = (size/2);
    while(start2<= noOfTimesLoop)
    {
        swap(arr[start1],arr[start2]);
        start1+=2;
        start2+=2;

    }
}

int main()
{
    int num[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11};

    int size = 11;

    cout << "Printing array" << endl;
    printArray(num, size);

    cout << endl
         << "Updating array" << endl;
    swapAlternate(num, size);

    cout << "Printing array" << endl;
    printArray(num, size);
}
