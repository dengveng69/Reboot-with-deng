#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Containers 
    array<int , 5> arr = {1,5,6};
    cout << arr[4] << endl;
    arr.fill(5);
    cout << arr[2] << endl;


    arr.at(2);

    // for(int i =0; i < 5; i++)
    // {
    //     cout << arr.at(i) <<endl;
    // }

    /*

    Iterators 
    begin(), end(), rbegin(), rend()

    */
    
    arr = {4,55,23,75,32};
    for(auto it= arr.begin(); it != arr.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for(auto it = arr.rbegin(); it != arr.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    for(auto it: arr)
    {
        cout << it << " ";
    }


    // size
    cout << arr.size() << endl;

    // front
    cout << arr.front() << endl;

    // back
    cout << arr.back() << endl;
    return 0;
}