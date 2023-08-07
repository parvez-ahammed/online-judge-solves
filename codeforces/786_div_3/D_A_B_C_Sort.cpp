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
    for (int i = 0; i < n; i++)
        cin >> v[i];

    
    for (int i = n - 1; i > 0; i -= 2)
    {
        if (v[i] < v[i - 1])
            swap(v[i], v[i - 1]);
    }

    if (is_sorted(v.begin(), v.end()))
        cout << "YES" << endl;

    else
        cout << "NO" << endl;
}
int32_t main()
{

    FAST;
    int tc;
    cin >> tc;
    while (tc--)
        solve();

    return 0;
}