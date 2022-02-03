#include<iostream>
using namespace std;

void printArray(char name[])
{
    for(int i=0;name[i]!='\0';i++)
    {
        cout<<name[i];
    }
    cout<<endl;
}

//Pass by reference
//Will print element till null terminator
void changeArray(char name[])
{
    name[2]='e';
    name[6]='\0';
}

int main()
{
    char name[10] ="alijoyiaa";
    printArray(name);
    changeArray(name);
    printArray(name);

}