#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int minV = INT_MAX, maxV = INT_MIN;
    for (int i = 0; i < n; i++)
        cin >> v[i], minV = min(minV, v[i]), maxV = max(maxV, v[i]);

    if (is_sorted(v.begin(), v.end()))
    {

        cout << 0 << endl;

        return;
    }
    else if (is_sorted(v.rbegin(), v.rend()))
    {
        cout << v[0] << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        v[i] = abs(v[i] - (maxV - minV) / 2);
        cout << v[i] / 1e6 << " ";
    }

    cout << endl;

    cout << is_sorted(v.begin(), v.end()) << endl;

    cout
        << endl;
}
int32_t main()
{

    FAST;
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}