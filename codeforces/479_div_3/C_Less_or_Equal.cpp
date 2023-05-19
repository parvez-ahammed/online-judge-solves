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
    ll n , k;
    cin >> n >> k;
    vll v(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    Sort(v);

    ll ans = v[k];

    if (k == 0) ans = v[1] - 1;

    if (ans < 1 || ans > 1000000000)
    {
        cout << -1 << endl;
        return;
    }
        

    if (k + 1 <= n)
    {
        if (v[k] == v[k + 1]  )
        {
            cout << -1 << endl;
            return;
        }
    
    }

    cout << ans << endl;
    


    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    
    cout << endl;

}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    //cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}