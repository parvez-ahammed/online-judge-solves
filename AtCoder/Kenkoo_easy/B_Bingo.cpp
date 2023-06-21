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
    vector<vector<int>> vv;

    rep(0, 3)
    {
        vector<int> v(3);
        for (int j = 0; j < 3; j++)
            cin >> v[j];
        vv.push_back(v);
    }

    int n,b;
    cin >> n;
    rep(0, n)
    {
        cin >> b;

        bool found = false;

        for (int j = 0; j < 3 && !found; j++)
        {

            for (int k = 0; k < 3; k++)
            {
                if (b == vv[j][k])
                {
                    vv[j][k] = -1;
                    found = true;
                    break;
                }
            }
        }
    }
    bool possible = false;

    rep(0, 3) if (vv[i][0] == -1 && vv[i][1] == -1 && vv[i][2] == -1) possible = true;
    rep(0, 3) if (vv[0][i] == -1 && vv[1][i] == -1 && vv[2][i] == -1) possible = true;
    (vv[0][0] == -1 && vv[1][1] == -1 && vv[2][2] == -1) ? possible = true : possible = possible;
    (vv[0][2] == -1 && vv[1][1] == -1 && vv[2][0] == -1) ? possible = true : possible = possible;

    possible ? cout << "Yes" : cout << "No";
    cout << endl;
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