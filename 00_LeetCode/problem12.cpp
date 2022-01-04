//Sort array of 0 1 

#include<iostream>
using namespace std;

void sort01(int *arr, int n)
{
  
  int end = n-1;
  for(int i=0;i<end;i++)
  {
      if(arr[i]!=0)
      {
          while(arr[end]!=0)
          {
              end--;
          }
          swap(arr[i],arr[end]);
          end--;
      }
  }
}


void displayArray(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[15] = {0,1,0,1,0,1,1,0,0,0,1,1,1,0,0};
    int size=15;

    displayArray(arr,size);
    sort01(arr,size);
    displayArray(arr,size);
}