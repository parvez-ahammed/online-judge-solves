#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    map<int, int> mp;

    for (int i = 0; i < n; i++)
        cin >> v[i], mp[v[i]]++;

    int source = v[0];
    int destination = v[n - 1];
    bool possible = true;
    if (mp[source] < k)
        possible = false;
    else if (source == destination && mp[source] >= k)
        possible = true;

    else
    {
        int cnt = 0;
        int i;
        for (i = 0; i < n; i++)
        {
            mp[v[i]]--;

            if (v[i] == source)
                cnt++;

            if (cnt == k)
                break;
        }

        possible = (mp[destination] >= k || source == destination);
    }

    possible ? cout << "YES" << endl : cout << "NO" << endl;
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