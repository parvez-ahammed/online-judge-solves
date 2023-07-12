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
#define rep(start, x) for (int i = start; i < x; i++)

void solve()
{
    int n, s;
    cin >> n >> s;

    int sum = 0;
    vi v(n);
    rep(0, n) cin >> v[i], sum += v[i];
    int ans = 0;
    if (sum == s)
    {
        cout << ans << endl;
        return;
    }
    if (s > sum)
    {
        cout << -1 << endl;
        return;
    }

    int have_to_remove = sum - s;

    vi f_first, r_first;
    f_first.push_back(0);
    r_first.push_back(0);

    rep(0, n) if (v[i] == 1) f_first.push_back(i +1);
    for (int i = n - 1; i >= 0; i--)
        if (v[i] == 1)
            r_first.push_back(n-i);

    // rep(0, f_first.size()) cout << f_first[i] << " ";
    // cout << endl;
    // rep(0, r_first.size()) cout << r_first[i] << " ";
    // cout << endl;

    int from_first = have_to_remove;
    ans = INT_MAX;

    while(from_first >= 0)
    {
        ans = min (f_first[from_first] + r_first[have_to_remove-from_first] , ans);
        from_first--;
    }

   
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