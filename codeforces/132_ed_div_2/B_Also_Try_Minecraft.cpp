#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define int long long int


int32_t main()
{

    int n;
    int m;
    cin >> n >> m;

    vector<int> a;
    vector<pair<int, int>> s;

    int temp, temp1;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> temp >> temp1;
        s.push_back(make_pair(temp, temp1));
    }

    vector<int> forward;
    vector<int> backward;
    forward.push_back(0);
    temp = 0;

    for (int i = 1; i < a.size(); i++)
    {

        if (a[i - 1] > a[i])
            temp += a[i - 1] - a[i];

        forward.push_back(temp);
    }
    temp = 0;
    backward.push_back(0);
    for (int i = a.size() - 1; i > 0; i--)
    {

        if (a[i] > a[i - 1])
        {
            temp += a[i] - a[i - 1];
        }
        backward.push_back(temp);
    }
    reverse(backward.begin(), backward.end());
    
    for (int i = 0; i < m; i++)
    {
        if (s[i].second > s[i].first)
        {
            cout << forward[s[i].second - 1] - forward[s[i].first - 1] << endl;
        }
        else
            cout << backward[s[i].second - 1] - backward[s[i].first - 1] << endl;
    }

    return 0;
}