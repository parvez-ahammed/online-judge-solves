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

void solve()
{
    int n, k;
    cin >> n >> k;
    string s, t;
    cin >> s >> t;
    int fr[26] = {0};

    for (char c : s)
        fr[c - 'a']++;

    for (char c : t)
        fr[c - 'a']--;

    for (int i = 0; i < 26; i++)
    {
        if (fr[i])
        {
            cout << "NO" << endl;
            return;
        }
    }

    if (k <= n)
    {

        for (int i = n - k + 1; i <= k; i++)
        {
            if (s[i - 1] != t[i - 1])
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    else 
    {
        if (s != t)
        {
            cout << "NO" << endl;
            return;
        }

    }

   

    cout << "YES" << endl;
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