#include<iostream>
#include<vector>

using namespace std;


int main()
{
    vector<vector<int>> main_vector;

    int row=3;
    int col=3;

     // num.push_back({1,2});
    // num.push_back({2,3});

    //Taking input 
    int num=0;
    for(int i=0;i<row;i++)
    {
        vector<int> vec;
        for(int j=0;j<col;j++)
        {
            vec.push_back(num);
            num+=2;
        }
        main_vector.push_back(vec);

    }

    main_vector.push_back({1,2,3});

    //Displaying values
    cout<<"Displaying value..."<<endl;
    for(int i=0;i<main_vector.size();i++)
    {
        for(int j=0;j<main_vector[i].size();j++)
        {
            cout<< main_vector[i][j]<<" ";
        }
        cout<<endl;

    }

   
 

}