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
    vector<int> va(26, 0);
    vector<int> vb(26, 0);
    int m = str.size() / 2;

    string a = "", b = "";

    int fa = 0, fb = 0;

    int ans = -1;

    for (int i = 0; i < n / 2; i++)
    {
        a += str[i];
        if (va[str[i] - 'a'] == 0)
        {
            fa++;
        }
        va[str[i] - 'a']++;
    }
    for (int i = (n / 2); i < n; i++)
    {
        b += str[i];
        if (vb[str[i] - 'a'] == 0)
        {
            fb++;
        }
        vb[str[i] - 'a']++;
    }

    ans = max(ans, fa + fb);

    for (int i = 0; i < b.size(); i++)
    {
        if (va[b[i] - 'a'] == 0 && vb[b[i] - 'a'] >= 2)
        {
            fa++;
            vb[b[i] - 'a']--;
        }

        ans = max(ans, fa + fb);
    }

    for (int i = a.size() - 1; i >= 0; i--)
    {
        if (vb[a[i] - 'a'] == 0 && va[b[i] - 'a'] >= 2)
        {
            fb++;
            va[a[i] - 'a']--;
        }
        else
        {
        }

        ans = max(ans, fa + fb);
    }
    // cout << a << " " << b << endl;

    cout << ans << endl;
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