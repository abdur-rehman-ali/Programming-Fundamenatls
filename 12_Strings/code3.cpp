#include <iostream>
#include<vector>
using namespace std;

// https://leetcode.com/problems/reverse-string/

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
        cout<<name[i];
    }
}


void reverseString(char s[])
{
    int end = getLength(s) - 1 ;
    int start=0;

    while(start<end)
    {
        swap(s[start++],s[end--]);
    }
    printArray(s);
}


int main()
{
    char str[] = "name";
    reverseString(str);
}