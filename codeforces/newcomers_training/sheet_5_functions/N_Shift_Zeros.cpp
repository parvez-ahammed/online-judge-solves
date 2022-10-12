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

    vector<ll> new_v;
    ll zero_count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != 0)
            new_v.push_back(v[i]);
        else
            zero_count++;
    }
    for (int i = 0; i < zero_count; i++)
        new_v.push_back(0);
    return new_v;
}
void solve()
{

    ll n;
    cin >> n;

    vector<ll> v(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    v = shift_right(v);

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