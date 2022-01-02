#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //initializing vector
    vector<int> v;

    //initializing vector of specfic size and value
    vector<int> sec(5, 1);

    cout << "Printing second vector" << endl;
    for (int i : sec)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "******************************************************" << endl;

    //initialzing vector from other vector
    //Copy vector to another vector
    vector<int> copySec(sec);
    cout << "Printing second copied vecrtor" << endl;
    for (int i : copySec)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "******************************************************" << endl;

    //Print capacity (element which vector can store) of vector
    cout << "Printing capacity of vector " << v.capacity() << endl;
    //Print size (element which are currently in vector ) of vector
    cout << "Printing size of vector " << v.size() << endl;

    cout << "******************************************************" << endl;

    //Append element to vector
    v.push_back(12);
    cout << "Printing capacity of vector " << v.capacity() << endl;
    cout << "Printing size of vector " << v.size() << endl;

    cout << "******************************************************" << endl;

    v.push_back(13);
    cout << "Printing capacity of vector " << v.capacity() << endl;
    cout << "Printing size of vector " << v.size() << endl;
    cout << "******************************************************" << endl;

    v.push_back(14);
    cout << "Printing capacity of vector " << v.capacity() << endl;
    cout << "Printing size of vector " << v.size() << endl;
    cout << "******************************************************" << endl;

    v.push_back(15);
    cout << "Printing capacity of vector " << v.capacity() << endl;
    cout << "Printing size of vector " << v.size() << endl;

    cout << "******************************************************" << endl;

    v.push_back(16);
    cout << "Printing capacity of vector " << v.capacity() << endl;
    cout << "Printing size of vector " << v.size() << endl;

    cout << "******************************************************" << endl;
    //Print element ar start
    cout << "Element at start " << v.front() << endl;
    //Print element at end
    cout << "Element at end " << v.back() << endl;

    cout << "******************************************************" << endl;

    //Printing array before popping
    cout << "Printing array before popping..." << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    //Remove element from end
    v.pop_back();

    //Printing array after popping
    cout << "Printing array after popping" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "******************************************************" << endl;

    //Print element at specific index
    cout << "Element at index 2 :" << v.at(2) << endl;

    cout << "******************************************************" << endl;

    //Printing array before clearing
    cout << "Printing array before clearing ..." << endl;
    cout << "Printing size before clearing ..." << v.size() << endl;
    cout << "Printing cappacity before clearing ..." << v.capacity() << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    //Making size of vector = 0
    v.clear();

    //Printing array after clearing
    cout << "Printing array after clearing ..." << endl;
    cout << "Printing size after clearing ..." << v.size() << endl;
    cout << "Printing capacity after clearing ..." << v.capacity() << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "******************************************************" << endl;
}