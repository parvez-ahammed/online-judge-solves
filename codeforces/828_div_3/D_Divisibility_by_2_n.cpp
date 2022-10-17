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

void solve()
{

    ll n, i, x, cnt, need, ans;
    cin >> n;
    need = n;
    ans = 0;

    for (i = 0; i < n; ++i)
    {
        cin >> x;
        while (x % 2 == 0)
        {
            x /= 2;
            need -= 1;
        }
    }

    vector<ll> con(n);
    for (i = 0; i < n; ++i)
    {
        x = i + 1;
        cnt = 0;
        while (x % 2 == 0)
        {
            x /= 2;
            ++cnt;
        }
        con[i] = cnt;
    }
    SortR(con);

    for (i = 0; i < n; ++i)
    {
        if (need <= 0)
            break;
        ans += 1;
        need -= con[i];
    }
    need > 0 ? ans = -1 : ans = ans;
    cout << ans << endl;
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