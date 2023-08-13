#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n), odd, even, arr;

    for (int i = 0; i < n; i++)
        cin >> v[i], (v[i] & 1) ? odd.push_back(v[i]) : even.push_back(v[i]);

    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    int odd_i = 0, even_i = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] & 1)
        {
            arr.push_back(odd[odd_i]);
            ++odd_i;
        }
        else
        {
            arr.push_back(even[even_i]);
            ++even_i;
        }
    }

    bool sorted = is_sorted(arr.begin(), arr.end());

     sorted ? cout << "YES" << endl : cout << "NO" << endl;
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}