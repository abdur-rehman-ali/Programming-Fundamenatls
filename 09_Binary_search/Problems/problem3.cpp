
//724. Find Pivot Index
// https://leetcode.com/problems/find-pivot-index/

#include <iostream>
#include <vector>
using namespace std;

int sumArray(vector<int> &nums, int start, int end)
{
    int sum = 0;

    for (start; start <= end; start++)
    {
        sum += nums[start];
    }
    return sum;
}

int pivotIndex(vector<int> &nums)
{
    int start = 0;
    int end = nums.size() - 1;


    int mid = 0 ;
    
    while(mid <=end)
    {
        int leftsum = sumArray(nums,start,mid-1);
        int rightsum = sumArray(nums,mid+1,end);
        if(leftsum == rightsum)
        {
            return mid;
        }
          mid++;
        
    }
    return -1;
}

int main()
{

    vector<int> arr = {-1,-1,-1,-1,0,1} ;
   
    cout<<pivotIndex(arr);
   
}