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
    vector<ll> v1(n, 0), v2(n, 0);

    for (int i = 0; i < n; i++)
        cin >> v1[i];

    Sort(v1);

    for (int i = 0; i < n; i++)
        cin >> v2[i];

    Sort(v2);

    bool possible = true;

    for (int i = 0; i < n; i++)
    {
        if (v1[i] != v2[i])
        {
            possible = false;
            break;
        }
    }

    if (possible)
        cout << "yes"
             << "\n";
    else
        cout << "no"
             << "\n";
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}