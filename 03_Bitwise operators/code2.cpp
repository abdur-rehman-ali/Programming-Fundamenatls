//Left shift (5<<1) 
//One left shift of small  numbers multiply that number by 2

//Right shift (5>>1)
//One right shift of small  numbers divide that number by 2


//Left shift and right shift of positive numbers have 
// padding of zero (means zero is replaced)

#include<iostream>
using namespace std;

int main()
{
    cout<<"Left shift one " << (5<<1)<<endl;
    cout<<"Right shift one " << (5>>1)<<endl;

    cout<<"Left shift " << (20<<2)<<endl;
    cout<<"Right shift " << (20>>2)<<endl;
}