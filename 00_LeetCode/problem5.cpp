// 231. Power of Two

#include<iostream>
#include<math.h>
using namespace std;

bool isPowerOfTwo(int n) 
{
    for(int i=0;pow(2,i)<=n;i++)
    {
        if(pow(2,i)==n)
        {
            return true;
        }
    }
    return false;


}

int main()
{
    cout<<isPowerOfTwo(1)<<endl;
    cout<<isPowerOfTwo(2)<<endl;
    cout<<isPowerOfTwo(4)<<endl;
    cout<<isPowerOfTwo(8)<<endl;
    cout<<isPowerOfTwo(17)<<endl;
    cout<<isPowerOfTwo(32)<<endl;
    cout<<isPowerOfTwo(33)<<endl;
}