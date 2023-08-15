
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

pair<int, int> process(vector<int> &v, int d)
{

    int take = 0;

    int totalCookies = 1;
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] + d > v[i + 1] && v[i] + d <= n)
        {
            ++take;
            v[i + 1] = v[i] + d;
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        int diff = v[i + 1] - v[i];

        totalCookies += diff / d;
    }

    return {totalCookies, take};
}

void solve()
{
    int n, m, d;

    bool has_one = false, has_n = false;

    cin >> n >> m >> d;

    vector<int> v(m);

    for (int i = 0; i < m; i++)
        cin >> v[i], has_one = (v[i] == 1), has_n = (v[i] == n);

    if (!has_one)
    {
        v.insert(v.begin(), 1);
        m++;
    }

    if (!has_n)
    {
        v.push_back(n);
        m++;
    }

    auto ans = process(v, d);

    for (int i = 0; i < m; i++)
        cout << v[i] << " ";

    cout << endl;

    cout << ans.first << " " << max(ans.second, 1) << endl;
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