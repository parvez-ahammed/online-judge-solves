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

    int n, k;
    cin >> n >> k;

    vector<pair<int, priority_queue<int>>> v(k + 3);
    int x;
    rep(1, n + 1)
    {
        cin >> x;

        int curr_leap = i - 1 - v[x].first;

        v[x].second.push(curr_leap);
        v[x].first = i;
    }

    rep(1, k + 1)
    {
        int curr_leap = n - v[i].first;

        v[i].second.push(curr_leap);
    }

    int minV = INT_MAX;

    rep(1, k + 1)
    {
        int x = v[i].second.top();
        v[i].second.pop();

        x /= 2;
        v[i].second.push(x);

        minV = min(minV, v[i].second.top());
    }

    cout << minV << endl;
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