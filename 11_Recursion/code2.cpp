#include<iostream>

using namespace std;


//Fibonacci  number
int fibonacci(int num)
{
    //base case
    if(num<=1)
    {
        return num;
    }
    
    //recursive function
    return fibonacci(num-1) + fibonacci(num-2);
}

int main()
{
    cout<<fibonacci(1)<<endl;
    cout<<fibonacci(4)<<endl;
    cout<<fibonacci(5)<<endl;
    cout<<fibonacci(6)<<endl;
    cout<<fibonacci(7)<<endl;
    cout<<fibonacci(17)<<endl;
}