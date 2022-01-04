#include <iostream>
#include<vector>
using namespace std;

//34. Find First and Last Position of Element in Sorted numsay

//1.Find left occurance

int leftOccurance(vector<int> &nums, int key)
{
    int start = 0;
    int end = nums.size() - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (nums[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > nums[mid])
        {
            start = mid + 1;
        }
        else if (key < nums[mid])
        {
            end = mid - 1;
        }
    }
    return ans;
}

//2.Find right occurance of value
int rightOccurance(vector<int> &nums, int key)
{
    int start = 0;
    int end = nums.size() - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (nums[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > nums[mid])
        {
            start = mid + 1;
        }
        else if (key < nums[mid])
        {
            end = mid - 1;
        }
    }
    return ans;
}

vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> result;
    int left = leftOccurance(nums,target);
    int right = rightOccurance(nums,target);
    result.push_back(left);
    result.push_back(right);

    return result;
}

int main()
{
    vector<int> nums = {10, 21, 64, 64, 64, 64, 64, 64, 64, 107, 171, 1243};
    int key = 64;

    vector<int> nums2 = {5,7,7,8,8,10};
    int key2 = 6;

    vector<int> result = searchRange(nums2,key2);

    for(int i:result)
    {
        cout<<i<<" ";
    }
}