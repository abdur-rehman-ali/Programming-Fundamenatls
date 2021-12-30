#include<iostream>
using namespace std;

int main()
{
    int a = 2;
    int b=a+1;

    // (a=3) It will assign 3 to a and also return a
    cout<<(a=3)<<endl; //3


    if((a=3)==b)
    {
        // 3==3 True 
        cout<<a<<endl; //3
    }
    else
    {
        cout<<a+1<<endl;
    }

    // Output 

    // 3 as if block will be exexuted

    return 0;
}