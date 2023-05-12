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

void solve()
{

    ll n, k;

    cin >> n >> k;
    ll iterable = n;
    n % 2 == 0 ? iterable = n : iterable = n - 1;
    vll prefix_sum(n);
    vll max_sum(n);
    vll min_sum;

    vector<ll> v(n);
    ll sum = 0;
    cin >> v[0];
    max_sum[0] = v[0];
    prefix_sum[0] = v[0];
    sum += v[0];

    for (int i = 1; i < n; ++i)
    {
        cin >> v[i];
        max_sum[i] = v[i];
        prefix_sum[i] = v[i];
        sum += v[i];
    }

    Sort(prefix_sum);
    SortR(max_sum);

    min_sum.push_back(0);

    for (int i = 1; i < iterable; ++i)
        prefix_sum[i] += prefix_sum[i - 1];
    for (int i = 1; i < v.size(); i++)
        max_sum[i] += max_sum[i - 1];


    for (int i = 1; i < iterable; i += 2)
        min_sum.push_back(prefix_sum[i]);


    max_sum.insert(max_sum.begin(), 0);

    ll mini =   10e17 + 1000000;

    for (int i = 0; i <= k; ++i)
        mini = min(mini, min_sum[k - i] + max_sum[i]);
    

    cout << sum - mini << endl;
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