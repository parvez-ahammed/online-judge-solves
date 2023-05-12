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
void printVector(vector<vector<int>> &v)
{
    cout << "Printing 2D vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << "Row "
                ": ";
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

void solve()
{

    int n;
    cin >> n;

    vector<vector<int>> v(12, vector<int>(12, 0));

    ll ans = 0;

    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;

        int src = s[0] - 'a';
        int dest = s[1] - 'a';

        for (int j = 0; j < 2; ++j)
        {
            for (char c = 'a'; c <= 'k'; ++c)
            {
                if (c == s[j])
                    continue;
                string a = s;
                a[j] = c;
                ans += v[a[0] - 'a'][a[1] - 'a'];
            }
        }

        v[src][dest]++;
    }
    cout << ans << "\n";
    
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