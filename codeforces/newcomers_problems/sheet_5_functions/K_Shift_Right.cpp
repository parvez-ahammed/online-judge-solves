#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define llu unsigned long long int
#define Sort(x) sort(x.begin(), x.end())
#define SortR(x) sort(x.begin(), x.end(), greater<int>())
#define Reverse(x) reverse(x.begin(), x.end())
#define sq(x) (x) * (x)
#define mid(l, r) (l + (r - l) / 2)
#define binary_of(x) (bitset<32>(x).to_string().substr(32 - log2(x)))
int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};

vector<ll> shift_right(vector<ll> v)
{

    ll last_elem = v[v.size() - 1];
    for (int i = v.size() - 2; i >= 0; i--)
    {
        v[i + 1] = v[i];
    }
    v[0] = last_elem;
    return v;
}
void solve()
{

    ll n, x;
    cin >> n >> x;

    vector<ll> v(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int rotaion_number = 0;

    rotaion_number = x >= n ? x % n : x;

    for (int i = 0; i < rotaion_number; i++)
    {
        v = shift_right(v);
    }
    for (int j = 0; j < n; j++)
    {
        cout << v[j] << " ";
    }
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}