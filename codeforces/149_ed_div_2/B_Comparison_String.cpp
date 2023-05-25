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

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    vi a(n + 1);

    int cost = 1;
    map<char, int> mp;

    for (int i = 0; i < n; i++)
        mp[s[i]]++;

    int max_count = 1;

    if (mp.size() == 1)
    {
        cout << n + 1 << endl;
        return;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
                cost++;
            else
            {
                max_count = max(max_count, cost);
                cost = 1;
            }
        }
    }
    cout << max(max_count, cost) + 1 << endl;
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