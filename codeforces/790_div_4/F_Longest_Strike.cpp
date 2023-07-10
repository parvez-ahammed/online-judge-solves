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
    vi v(n);
    map<int, int> mp;

    rep(0, n) cin >> v[i], mp[v[i]]++;

    int left = 0;
    int right = 1;
    vector<int> eligible;

    for (auto x : mp)
    {
        if (x.second >= k)
            eligible.push_back(x.first);
    }

    Sort(eligible);
    priority_queue<pair<int, int>> pq;

    while (right < eligible.size())
    {
        int prev = eligible[right - 1];
        int curr = eligible[right];

        if (prev + 1 != curr)
        {
            pq.push({right - left - 1, left});
            left = right;
        }

        right++;
    }

    if (!pq.empty())
    {
        if (right - left - 1 > pq.top().first)
            cout << eligible[left] << " " << eligible[right - 1] << endl;
        else
            cout << eligible[pq.top().second] << " " << eligible[pq.top().second + pq.top().first] << endl;
    }
    else if (left == 0 && right == eligible.size())
        cout << eligible[left] << " " << eligible[right - 1] << endl;
    else
        cout << -1 << endl;
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