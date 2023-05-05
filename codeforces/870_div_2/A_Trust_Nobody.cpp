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
#define mid(l, r) (l + (r - l) / 2)
#define binary_of(x) (bitset<32>(x).to_string().substr(32 - log2(x)))
int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};
#define BIG_MOD 1000000007
#define vi vector<int>
#define vll vector<ll>

void solve()
{
    int n;
    cin >> n;

    map<int, int> mp;
    int min_v = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        min_v = min(min_v, x);
        mp[x]++;
    }

    int liar_count = n - mp[min_v];

    if (liar_count == 0)
    {

       // cout  << min_v << "  " << n << endl;

        if (min_v == 0)
            cout << 0 << endl;
        else if (min_v + 1 == n && mp.size() == 1)
            cout << min_v << endl;
        else
            cout << -1 << endl;
    }
    else
        cout << liar_count << endl;
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