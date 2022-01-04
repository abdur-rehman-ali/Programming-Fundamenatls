#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


// https://bit.ly/32Gab7v

//Pair sum problem

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

    sort(main_vector.begin(), main_vector.end());
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