#include<iostream>
using namespace std;

//Get length of character array and print character individually

int getLength(char name[])
{
    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}

void printArray(char name[])
{
    for(int i=0;name[i]!='\0';i++)
    {
        cout<<"index = " <<i<<" Value = "<<name[i]<<endl;
    }
}

int main()
{
    char name[10];
    cout<<"Enter your name "<<endl;
    cin>>name;
    cout<<getLength(name)<<endl;
    printArray(name);
    cout<<sizeof(name)<<endl;

}