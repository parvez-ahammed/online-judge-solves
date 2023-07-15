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
#define rep(start, x) for (int i = start; i < x; i++)

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vi> vv;

    for (int i = 1; i <= n; i++)
    {
        int p, c;
        cin >> p >> c;
        vi v(c + 1);
        v[0] = p;
        for (int j = 1; j <= c; j++)
            cin >> v[j];

        vv.push_back(v);
    }

    Sort(vv);

    for (int j = 0; j < n; j++)
    {

        for (int i = 0; i < n; i++)
        {
            // cout << vv[j][i] << " ";

            if (i != j)
            {
                if (vv[i][0] >= vv[j][0] && (vv[i][0] > vv[j][0] || vv.  ))
                    cout << vv[i][0] << " " << vv[j][0] << endl;
            }
        }

        cout << endl;
    }

    cout << "HELLO WORLD " << vv.size() << endl;
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