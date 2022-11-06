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
    ll n;
    cin >> n;
    string str;
    cin >> str;

    ll max_sub_1 = 0;
    ll max_1 = 0, max_0 = 0;
    ll max_sub_0 = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == str[i + 1] && str[i] == '1')
            max_sub_1 += 1;
        else
        {
            if (str[i] == '1')
                max_sub_1 += 1;
            max_1 = max(max_1, max_sub_1);
            max_sub_1 = 0;
        }
        if (str[i] == str[i + 1] && str[i] == '0')
            max_sub_0 += 1;
        else
        {
            if (str[i] == '0')
                max_sub_0 += 1;
            max_0 = max(max_0, max_sub_0);
            max_sub_0 = 0;
        }
    }

    ll x = count(str.begin(), str.end(), '1');
    ll y = count(str.begin(), str.end(), '0');

    ll final_max = max(max_1, max_0);

    cout << max(final_max * final_max, x * y) << endl;
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