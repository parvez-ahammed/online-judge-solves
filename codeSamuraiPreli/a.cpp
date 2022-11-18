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
ll fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
ll fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};

void solve()
{
    ll n;
    cin >> n;

    priority_queue<pair<ll, ll>> pq;

    ll width, height;

    for (ll i = 0; i < n; i++)
    {
        cin >> width >> height;

        pq.push(make_pair(height, width));
    }
    ll result = 0;
    ll prev_width = 0;
    ll max_height = 0;
    ll max_width = 0;

    while (!pq.empty())
    {

        if (pq.top().second > max_width)
        {

            cout << pq.top().first << " " << pq.top().first << endl;
            result += pq.top().first * (pq.top().second - prev_width);
        }

        max_height = pq.top().first;
        max_width = pq.top().second;
        prev_width = pq.top().second;
        // cout << result << endl;

        pq.pop();
    }
    cout << result << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc = 1;

    while (tc--)
        solve();

    return 0;
}