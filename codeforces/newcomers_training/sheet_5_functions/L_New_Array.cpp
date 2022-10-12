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
void yamete_kudasai(vector<ll> a, vector<ll> b)

{

    for (int i = 0; i < a.size(); i++)
        b.push_back(a[i]);

    for (int i = 0; i < b.size(); i++)
        cout << b[i] << " ";
}
void solve()
{

    long long n;
    cin >> n;
    vector<ll> a, b;
    ll temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }
    for (int i = 0; i < n ; i++)
    {
        cin >> temp;
        b.push_back(temp);
    }

    yamete_kudasai(a, b);
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