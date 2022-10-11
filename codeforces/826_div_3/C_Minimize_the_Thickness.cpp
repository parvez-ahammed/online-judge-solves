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

void solve()
{

    ll n, total_sum = 0;
    cin >> n;
    vector<ll> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        total_sum += v[i];
    }

    // for (int i = 0; i < n; i++)
    //     cout << v[i] << " ";

    SortR(v);
    ll max_value = v[0];

    v.erase(v.begin());
    total_sum -= max_value;

    ll sum = 0;
    ll value_used = 0;

    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
        total_sum -= v[i];

        value_used = i + 1;
        
        if (sum == max_value)
        {
            break;
        }
    }



    if (total_sum != max_value )
    {
        cout << v.size() + 1 << endl;
    }

    else
        cout << max(value_used, v.size() - value_used) << endl;
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