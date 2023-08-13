#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

struct collector
{
    ll value;
    ll pay;
};

int32_t main()
{

    FAST;
    int n, m;
    cin >> n >> m;
    vector<collector> c(m);

    for (int i = 0; i < m; i++)
        cin >> c[i].value;

    for (int i = 0; i < m; i++)
        cin >> c[i].pay;

    ll sum = 0, x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
    }

    ll ans = LLONG_MIN;

    for (int i = 0; i < m; i++)

    {
        ll temp = sum - ((long long)c[i].value * n) - c[i].pay;
        ans = max(ans, temp);
    }

    if (ans == 0)
        cout << "Neutral" << endl;
    else if (ans > 0)
        cout << "Profit " << ans << endl;
    else
        cout << "Loss " << abs(ans) << endl;
    return 0;
}