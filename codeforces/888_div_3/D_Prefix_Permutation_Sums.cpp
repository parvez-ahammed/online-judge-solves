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

    ll n;
    cin >> n;
    vll v(n + 5);

    set<ll> s;
    for (int i = 0; i <= n; i++)
        s.insert(i);

    ll missed = -1;

    ll val;

    rep(1, n)
    {
        cin >> v[i];

        val = v[i] - v[i - 1];

        if (s.count(val))
            s.erase(val);
        else
            missed = val;
    }

    ll sum = (n * (n + 1)) / 2;
    ll check = sum - v[n - 1];

    if (s.count(check))
        s.erase(check);
    else
        missed = check;

    ll elemSum = 0;
    for (auto elem : s)
        elemSum += elem;

    if (s.size() == 2 && elemSum == missed)
        cout << "YES";
    else if (s.size() == 1 && elemSum == 0)
        cout << "YES";
    else
        cout << "NO";

    cout << endl;
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