// 442. Find All Duplicates in an Array

#include <iostream>
#include <vector>
using namespace std;

//1.initilize frequency array with 0
//2. initilze answer array (int ans[] )
//3. if(frequency[arr[i]] ==0 ) then   frequency[arr[i]+=1
//4. else ans.push(arr[i])

vector<int> findDuplicates(vector<int>& nums) 
{
    vector<int> frequency(nums.size()+1, 0);
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        if (frequency[nums[i]] == 0)
        {
            frequency[nums[i]] += 1;
        }
        else
        {
            ans.push_back(nums[i]);
        }
    }

    return ans;
        
}
int main()
{

    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    // vector<int> nums1 = {1};
    // vector<int> nums2 = {1, 1, 2};

    vector<int> ans;
    ans = findDuplicates(nums);
    // cout << ans.size();

    // int nums2[3] = {1, 1, 2};
    // duplicate(nums2,3);
}