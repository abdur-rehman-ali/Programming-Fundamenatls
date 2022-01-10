#include <iostream>
using namespace std;

void fun(int arr[])
{
    cout << arr[0] << " ";
}

int main()
{
    int arr[] = {11, 12, 13, 14};
    fun(arr + 1);
    cout << arr[0] << endl;
}

//ANSWER
//12 11