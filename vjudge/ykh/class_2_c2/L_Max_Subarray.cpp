#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define llu unsigned long long int
#define Sort(x) sort(x.begin(), x.end())
#define SortR(x) sort(x.begin(), x.end(), greater<int>())
#define Reverse(x) reverse(x.begin(), x.end())
#define sq(x) (x) * (x)
#define mid(l, r) (l + (r - l) / 2)
int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};

void solve()
{

    ll n;
    cin >> n;

    vector<ll> v(n, 0);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll count = n;

    ll size = (n * (n + 1)) / 2;

    vector<ll> maxs;

    for (int i = 0; i < n; i++)
        maxs.push_back(v[i]);
    ll current_max;
    for (int i = 0; i < n; i++)
    {
        current_max = v[i];
        for (int j = i; j < n - 1; j++)
        {
            current_max = max(current_max, v[j + 1]);
            maxs.push_back(current_max);
        }
    }
    for (int i = 0; i < maxs.size(); i++)
        cout << maxs[i] << " ";

    cout << "\n";
}

int32_t main()
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