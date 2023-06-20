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

int lcsubstr(string str1, string str2)
{
    int ans = 0;

    for (int i = 0; i < str1.length(); i++)
    {
        for (int j = 0; j < str2.length(); j++)
        {
            int k = 0;
            while ((i + k) < str1.length() && (j + k) < str2.length() && str1[i + k] == str2[j + k])
                k = k + 1;

            ans = max(ans, k);
        }
    }
    return ans;
}

void solve()
{
    string a, b;
    cin >> a >> b;

    if (a.size() < b.size())
        swap(a, b);
    string X = a;
    string Y = b;

    int m = X.length();
    int n = Y.length();

    cout << a.size() + b.size() - (2 * lcsubstr(X, Y)) << endl;
    ;
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