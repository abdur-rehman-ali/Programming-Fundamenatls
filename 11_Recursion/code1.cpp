#include<iostream>

using namespace std;

//Power of 2 

int powerOfTwo(int num)
{

    //base case
    if(num==0)
    {
        return 1;
    }

    //resursive function
    int subproblem = powerOfTwo(num-1);
    return 2 * subproblem;
}

int main()
{
    cout<<powerOfTwo(5)<<endl;
    cout<<powerOfTwo(9)<<endl;
    cout<<powerOfTwo(4)<<endl;
}