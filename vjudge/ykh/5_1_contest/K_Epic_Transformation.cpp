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
    int n;
    cin >> n;
    int x;
    map<int, int> mp;
    rep(0, n) cin >> x, mp[x]++;
    priority_queue<int> pq;


    for (auto p : mp)
        pq.push(p.second);

    
    while(pq.size()> 1)
    {
        int first = pq.top(); pq.pop();
        int second = pq.top(); pq.pop();
        --first;
        --second;

        if (first != 0)
        pq.push(first);
        if (second != 0)
        pq.push(second);

    }
    
    if (pq.empty()) cout << 0 << endl;
    else cout << pq.top()<< endl;
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