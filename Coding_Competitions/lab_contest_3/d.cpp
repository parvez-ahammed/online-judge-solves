#include <bits/stdc++.h>
using namespace std;

void solve()
{

    long long int n, m;

    cin >> n >> m;

    vector<long long int> v;

    long long temp;

    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end(), greater<long long int>());

    int j = 0;

    long long int sum = 0;

    for (int i = 0; i < n && i < m; i++)
    {
        sum += v[i];
    }
    cout << sum << "\n";
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
