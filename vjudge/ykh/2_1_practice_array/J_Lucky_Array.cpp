#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    map<int, int> mp;
    int temp = 0;
    int minV = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        mp[temp]++;
        minV = min(temp, minV);
    }

    (mp[minV] % 2 != 0) ? cout << "Lucky" << endl : cout << "Unlucky" << endl;

    return 0;
}