#include<iostream>

using namespace std;

// You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

//APPROACH
//XOR WIll delete the element which occur in pairs
//Only that elelment will be left which exit one time
// int ans1 = 1^2^3^4 ^1;
// int ans2 = 1^2^3^4 ^ans1;


int findDuplicate(int arr[],int size) 
{
    int ans = 0;

    for (int i=0;i<size;i++)
    {
        ans = ans ^ arr[i];
    }

    for(int i=1;i<size;i++)
    {
        ans = ans ^ i;
    }

    return ans;
	
}

int main()
{
   int num1[5] = {4, 2, 1, 3, 1};

   cout<<findDuplicate(num1,5);
}