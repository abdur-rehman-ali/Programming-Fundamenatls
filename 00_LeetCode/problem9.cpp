//Intersection of two array

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// 1. The length of each array is greater than zero.
// 2. Both the arrays are sorted in non-decreasing order.
// 3. The output should be in the order of elements that occur in the original arrays.
// 4. If there is no intersection present then return an empty array.
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((arr1[i] == arr2[j]))
            {
                ans.push_back(arr1[i]);
                //Update value with some dummy value as it is mappeed
                arr2[j] = INT_MIN;
                break;
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 4, 5, 5, 6, 7};
    vector<int> nums2 = {2, 3, 4, 5, 6};

    vector<int> ans = findArrayIntersection(nums1, nums1.size(), nums2, nums2.size());

    for (int i : ans)
    {
        cout << i << " ";
    }
}
