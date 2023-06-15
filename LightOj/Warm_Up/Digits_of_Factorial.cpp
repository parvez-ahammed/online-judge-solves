#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
#define Reverse(x) reverse(x.begin(), x.end())

vector<double> v(1e6 + 1);

void solve()
{
    ll n, b;
    cin >> n >> b;

    ll result = 0;

    result = v[n] / log(b) + 1;

    cout << result << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    v.push_back(0);
    rep(1, 1e6+1)
        v[i] = v[i - 1] + log(i);

    int tc = 1;
    int i = 1;
    cin >> tc;
    while (tc--)
    {
        cout << "Case " << i++ << ": ";
        solve();
    }
    return 0;
}