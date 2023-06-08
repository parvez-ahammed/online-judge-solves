#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define llu unsigned long long int
#define Sort(x) sort(x.begin(), x.end())
#define SortR(x) sort(x.begin(), x.end(), greater<int>())
#define Reverse(x) reverse(x.begin(), x.end())
#define sq(x) (x) * (x)
#define mid(key, r) (key + (r - key) / 2)
#define binary_of(x) (bitset<32>(x).to_string().substr(32 - log2(x)))
int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};
#define BIG_MOD 1000000007
#define vi vector<int>
#define vll vector<ll>

ll binary(vll v)
{

    Sort(v);
    ll n = v.size();
    ll l = 0;
    ll r = BIG_MOD;
    ll mid = 0;
    ll wait = 0;

    while (l <= r)
    {
        mid = (l + r) >> 1;

        int key = 0;
        int count = 0;

        for (int k = 0; k < n; k++)
        {
            if ((v[k] - v[key]) >  mid << 1)
                key = k, count++;
        }
        if (count >= 3)
            l = mid + 1;
        else
            wait = mid, r = mid - 1;
    }

    return wait;
}

void solve()
{

    int n;
    cin >> n;

    vector<ll> v(n);

    map<ll, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    if (mp.size() <= 3)
        cout << 0 << endl;
    else
        cout << binary(v) << endl;
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