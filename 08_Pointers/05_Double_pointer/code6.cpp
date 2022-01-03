#include<iostream>

using namespace std;

void update(int **ptr)
{
    cout<<"Derefrencing ptr "<<**ptr<<endl; //5
    **ptr = **ptr+1;
    cout<<"Derefrencing ptr "<<**ptr<<endl; //6
}

int main()
{
    int num= 5;
    int *ptr = &num;
    int **ptr2 = &ptr;

    cout<<"Derefrencing ptr "<<**ptr2<<endl; //5
  

    //incrementing value using function
    cout<<"Going inside function"<<endl<<endl;
    update(ptr2);
    cout<<"Came out of function"<<endl<<endl;

    cout<<"Derefrencing ptr "<<**ptr2<<endl; //6
 


}