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
    set<int> s;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i], s.insert(v[i]);

    if (s.size() == 1)
    {
        cout << -1 << endl;
        return;
    }

    sort(v.begin(), v.end());
    int cnt = 0;

    for (int i = 0; i < n; i++)
        cnt += (v[i] == v[0]);

    cout << cnt << " " << n - cnt << endl;
    for (int i = 0; i < cnt; i++)
        cout << v[i] << " ";
    cout << endl;

    for (int i = cnt; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
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