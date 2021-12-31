//Find notes of 100,50,10 in an amount

#include <iostream>
using namespace std;

int main()
{

    int amount;
    cout << "Enter amount :";
    cin >> amount;

    switch (0)
    {
    case 0:
        cout<<"Starting calculation ..."<<endl;
    case 1:
    {
        int hundred = amount / 100;
        cout << "hundred = " << hundred<< endl;
        amount = amount % 100;
    }
    case 2:
    {
        int fifty = amount / 50;
        amount = amount % 50;
        cout << "fifty = " << fifty << endl;
    }
    case 3:
    {
        int twenty = amount / 20;
        amount = amount % 20;
        cout << "twenty = " << twenty << endl;
    }
    case 4:
    {
        int ten = amount / 10;
        amount = amount % 10;
        cout << "ten = " << ten << endl;
    }
    }
}