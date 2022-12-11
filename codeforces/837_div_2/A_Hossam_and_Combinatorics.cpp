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

void solve()
{
    ll n;
    cin >> n;
    vector<ll> b;
    ll temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        b.push_back(temp);
    }

    set<ll> s(b.begin(), b.end());

    if (s.size() == 1)
        cout << (n * (n - 1)) << endl;
    else
    {
        ll max_elem = *max_element(b.begin(), b.end());
        ll min_elem = *min_element(b.begin(), b.end());
        ll max_elem_count = count(b.begin(), b.end(), max_elem);
        ll min_elem_count = count(b.begin(), b.end(), min_elem);

        cout << max_elem_count * 2 * min_elem_count << endl;
    }
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