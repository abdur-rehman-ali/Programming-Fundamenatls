#include <iostream>
using namespace std;

//Fundamental of address in arrays

int main()
{
    int a[] = {1, 2, 3};

    //Print address of value at index 0
    cout << (a + 0) << endl;
    //Print address of value at index 1
    cout << (a + 1) << endl;
    //Print address of value at index 2
    cout << (a + 2) << endl;

    //Increment the address by 4 and print it
    cout << (a + 3) << endl;
    //Some garbage value
    cout << *(a + 3) << endl;

    //Print value at index 0
    cout << *(a + 0) << endl;
    //Print value  index 1
    cout << *(a + 1) << endl;
    //Print value  index 2
    cout << *(a + 2) << endl;

    int arr[] = {4, 5, 6, 7};
    //*arr will point to value store at first index
    cout << *arr + 9; // 4 + 9 = 13
}