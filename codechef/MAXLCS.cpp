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
    int n;
    cin >> n;
    string str;
    cin >> str;

    string x = str;
    string y = str;
    reverse(y.begin(), y.end());

    vector<vector<int>> vv(x.size() + 1, vector<int>(y.size() + 1, 0));

    for (int i = 1; i < vv.size(); i++)
    {
        for (int j = 1; j < vv[i].size(); j++)
        {
            if (y[j - 1] == x[i - 1])
                vv[i][j] += vv[i - 1][j - 1] + 1;
            else if (vv[i - 1][j] >= vv[i][j - 1])
                vv[i][j] = vv[i - 1][j];
            else
                vv[i][j] = vv[i][j - 1];
        }
    }

    cout << (int)vv[n][n] / 2 << endl;
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
