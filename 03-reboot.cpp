#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(10,3);
    vector<int> vc1(v.begin(),v.end());
    vector<int> vc2(vc2);

    vc1.push_back(10);
    vc1.pop_back();

    vc2.emplace_back(23);

    // lower bound. upper bound

    // swap swap(v1,v2)

    // begin(), end(), rbegin(), rend()

    // to defining 2D vectors

    vector<vector<int>> vec;

    for(auto i = 0; i < vec.size(); i++)
    {
        for(auto j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}