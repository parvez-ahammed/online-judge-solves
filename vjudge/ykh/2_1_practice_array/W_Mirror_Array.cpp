#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> vv;
    int temp;
    for (int i =0 ; i < n; i++)
    {   
        vector<int> v;
        for (int j = 0; j < m; j++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        reverse(v.begin(), v.end());
        vv.push_back(v);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << vv[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}