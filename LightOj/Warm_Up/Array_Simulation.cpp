#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
#define Reverse(x) reverse(x.begin(), x.end())
void solve()
{

    ll n, m;

    cin >> n >> m;

    vector<ll> v(n);
    rep(0, n) cin >> v[i];

    while (m--)
    {

        char c;
        cin >> c;

        ll d, k, y, z;

        switch (c)
        {
        case 'S':
            cin >> d;
            rep(0, n) v[i] += d;
            break;
        case 'M':
            cin >> d;
            rep(0, n) v[i] *= d;
            break;
        case 'D':
            cin >> k;
            if (k != 0)
                rep(0, n) v[i] /= k;

            break;
        case 'P':
            cin >> y >> z;
            swap(v[y], v[z]);
            break;
        case 'R':
            Reverse(v);
            break;

        default:
            break;
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
    int i = 1;
    cin >> tc;
    while (tc--)
    {
        cout << "Case " << i++ << ": " << endl;
        solve();
    }
    return 0;
}