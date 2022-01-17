

// 88. Merge Sorted Array
// https://leetcode.com/problems/merge-sorted-array/

#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i=0,j=0;
    vector<int> sorted;
    while(i<m && j<n)
    {
        if(nums1[i]<nums2[j])
        {
            sorted.push_back(nums1[i]);
            i++;
        }
        else
        {
            sorted.push_back(nums2[j]);
            j++;
        }
    }

    for(i;i<m;i++)
    {
        sorted.push_back(nums1[i]);
    }
    for(j;j<n;j++)
    {
        sorted.push_back(nums2[j]);
    }

    cout << "Printing second vector" << endl;
    vector<int> nums1(sorted);
    for (int k : nums1)
    {
        cout << k << " ";
    }
}


int main()
{
   vector<int> nums1 = {1,2,3}; 
   int m = 3;
   vector<int> nums2 = {2,5,6}; 
   int n = 3;

   merge(nums1,m,nums2,n);
}