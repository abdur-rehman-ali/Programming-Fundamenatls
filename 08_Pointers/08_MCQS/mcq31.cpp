#include <iostream>
using namespace std;

int main()
{
    int arr[] = {41, 52, 36, 74};
    int *p = (arr + 1);
    cout << *arr << endl;
    cout << *arr + 2 << endl;
    cout << *(arr + 2) << endl;
    return 0;
}

//Answer
//41
//43
//36