#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// PROBLEM STATEMENT
// You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'

//important note
// Each pair should be sorted i.e the first value should be less than or equals to the second value.
// Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have the same first value, the pair with a smaller second value should come first.

// input 1
// 5
// 1 2 3 4 5

// output 1
// 1 4
// 2 3

// input 2
// 0
// 2 -3 3 3 -2

//output 2
// -3 3
// -3 3
// -2 2

bool sortcol(const vector<int> &v1,
             const vector<int> &v2)
{
    return v1[0] < v2[0];
}

vector<vector<int>> pairSum(vector<int> &arr, int s)
{

    vector<vector<int>> main_vector;

    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (element + arr[j] == s)
            {
                //Pair should be added in sorted manner
                if (element < arr[j])
                {
                    main_vector.push_back({element, arr[j]});
                }
                else
                {
                    main_vector.push_back({arr[j], element});
                }
            }
        }
    }

    sort(main_vector.begin(), main_vector.end(), sortcol);
    return main_vector;
}

int main()
{
    vector<vector<int>> main_vector;

    vector<int> values = {1, 2, 3, 4, 5};
    int s = 5;
    vector<int> values1 = {2, -3, 3, 3, -2};
    int s1 = 0;

    main_vector = pairSum(values1, s1);

    //Displaying values
    cout << "Displaying value..." << endl;
    for (int i = 0; i < main_vector.size(); i++)
    {
        for (int j = 0; j < main_vector[i].size(); j++)
        {
            cout << main_vector[i][j] << " ";
        }
        cout << endl;
    }
}