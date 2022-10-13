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
    ll n, q;
    cin >> n >> q;
    vector<vector<ll>> vv(11, vector<ll>(1, 0));
    ll temp;

    // for (int i = 0; i < vv.size(); i++)
    // {
    //     for (int j = 0; j < vv[i].size(); j++)
    //     {
    //         cout << vv[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        cin >> temp;

        int pos = int(log10(temp) + 1);

        vv[pos].push_back(temp);
    }

    for (int i = 0; i < q; i++)
    {
        cin >> temp;
        ll sum = 0;

        if (temp == 0)
        {
            cout << sum << " ";
        }
        else
        {
            int pos = int(log10(temp) + 1);

            for (int j = 0; j < vv[pos].size(); j++)
            {

                if (temp >= vv[pos][j])
                {
                    sum += vv[pos][j];
                }
                else
                    break;
            }
            for (int j = 0; j < pos; j++)
                sum += accumulate(vv[j].begin(), vv[j].end(), 0);
            cout << sum << " ";
        }
    }

    cout << endl;
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