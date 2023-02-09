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

    vector<int> v(26, 0);
    for (int i = 0; i < str.size(); i++)
    {
        v[str[i] - 'a']++;
    }

    string ans = "";

  

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != 0)
        {
            if (v[i] % n != 0)
            {
                cout << -1 << endl;
                return;
            }
            else
            {
                v[i] /= n;

                for (int j = 0; j < v[i]; j++)
                {
                    ans += i + 'a';
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans;
    }

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