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
    vector<int> a(n), b(n);

    ll sum = 0;

    bool has_one = false;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    if (a.size() == 1)
    {
        cout << "NO" << endl;
        return;
    }

    ll curr_sum = 0;

    bool possible = true;

    for (int i = 0; i < n; i++)
    {
        b[i] = (a[i] == 1 ? 2 : 1);

        curr_sum += b[i];
    }

    possible = (curr_sum <= sum);

    possible
        ? cout << "YES" << endl
        : cout << "NO" << endl;
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