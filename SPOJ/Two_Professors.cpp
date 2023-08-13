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

    vector<pair<int, int>> v(n);
    priority_queue<pair<int, int>> pq;

    rep(0, n) cin >> v[i].second >> v[i].first;
    
    pq.push(v[0]);
    pq.push(v[1]);
    v.erase(v.begin());
    v.erase(v.begin());
    Sort(v);

    int ans = 2;

    rep(0, v.size())
    {
        auto curr = v[i];

        cout << "FOR " << i << endl;
        priority_queue<pair<int, int>> temp;

        while (!pq.empty())
        {
            cout << pq.top().first << " " << v[i].second << endl;
            if (pq.top().first <= v[i].second)
            {
                pq.pop();
                break;
            }

            else
            {
                temp.push(pq.top());
                pq.pop();
            }
        }

        pq.push(v[i]);
        while (!temp.empty())
        {
            pq.push(temp.top());
            temp.pop();
        }

        int sz = pq.size();
        ans = max(ans, sz);
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