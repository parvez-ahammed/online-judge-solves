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

    vector<int> a(n), b(n), valid;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int maxV = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        maxV = max(maxV, a[i] - b[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] - b[i] == maxV)
            valid.push_back(i);
    }

    cout << valid.size() << endl;

    int m = valid.size();
    for (int i = 0; i < m; i++)
        cout << valid[i] +1 << " ";

    cout << endl;
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