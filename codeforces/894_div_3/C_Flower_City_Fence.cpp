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

    bool possible = true;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> ans = v, temp;

    sort(ans.begin(), ans.end());

    for (int i = 1; i <= n; i++)
    {
        int greater = lower_bound(ans.begin(), ans.end(), i) - ans.begin();
        greater = n - greater;
        temp.push_back(greater);
    }
    for (int i = 0; i < n; i++)
    {
        if (temp[i] != v[i])
        {
            possible = false;
            break;
        }
    }

    if (possible)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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