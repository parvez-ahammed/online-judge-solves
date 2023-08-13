#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define vi vector<int>
#define vll vector<ll>
#define rep(start, x) for (int i = start; i < x; i++)

#define leftShift(p) (p << 1)
#define rightShift(p) (p >> 1)
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define ToggleBit(x, k) (x ^= (1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)
#define binary_of(x) (bitset<32>(x).to_string().substr(32 - log2(x)))
vi v;

void handlePair(auto f, auto &q)
{
    int max_on_bit;
    v[f.first * -1] = f.second;


    if (f.second != 0)
    {
        max_on_bit = floor(log2(f.second));
        q[max_on_bit].push({f.first, f.second});
    }
}
void solve()
{
    int n, x;
    cin >> n >> x;

    v = vector<int>(n);
    priority_queue<pair<int, int>> pq[50];

    int max_on_bit;
    rep(0, n)
    {
        cin >> v[i];
        max_on_bit = floor(log2(v[i]));
        pq[max_on_bit].push({i * -1, v[i]});
    }

    for (int p = 31; p >= 0; p--)
    {
        auto curr_q = pq[p];
        while (curr_q.size() >= 2 && x > 1)
        {

            auto f = curr_q.top();
            curr_q.pop();
            auto s = curr_q.top();
            curr_q.pop();

            f.second ^= (1 << p);
            s.second ^= (1 << p);
            --x;

            handlePair(f, pq);
            handlePair(s, pq);
        }
    }

    rep(0, n) cout << v[i] << " ";
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