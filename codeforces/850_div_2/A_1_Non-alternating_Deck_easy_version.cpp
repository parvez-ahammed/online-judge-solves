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

vector<ll> v;

void global()
{
    ll alice = 1;
    ll bob = 5;

    v.push_back(0);
    v.push_back(alice);

    ll curr = 0;

    for (int i = 2; curr < 10e6 + 7; i++)
    {
        v.push_back(v[i - 1] + 4);
        curr = v[i];
    }
}

void solve()
{
    ll n;
    cin >> n;

    ll alice = 0, bob = 0;

    int i;
    for (i = 1; alice + bob < n; i++)
    {
        if (i % 2 == 1)
            alice += v[i];
        else
            bob += v[i];
    }
    i--;
    if (alice + bob == n)
        cout << alice << " " << bob << endl;
    else if (i % 2 == 1)
    {
        cout << n - bob << " " << bob << endl;
    }
    else
    {
        cout << alice << " " << n - alice<< endl;
    }
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    global();
    while (tc--)
    {
        solve();
    }
    return 0;
}