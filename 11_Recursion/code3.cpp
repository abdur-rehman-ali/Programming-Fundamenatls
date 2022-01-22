#include <iostream>

using namespace std;

int print(int num)
{
    //base case
    if (num == 0)
        return 0;

    //Processing
    cout << num << " ";

    // recuranse relation 
    print(num - 1);
}

int main()
{
    print(10);
}