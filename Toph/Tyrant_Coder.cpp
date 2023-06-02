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

void solve(int i)
{
    string s;
    cin >> s;
    int n = s.size();

    cout << "Case " << i << ": ";

    int max_count = 0;
    int max_char = 0;
    int count = 0;
    string ans = "";

    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {

        if (v[i] == 0)
        {
            v[i] = 1;
            count++;
            for (int j = i + 1; j < 11; j++)
            {
                if (s[i] == s[j])
                {
                    count++;
                    v[j] = 1;
                }
                else
                {
                    break;
                }
            }

            max_char = max(max_char, s[i] - '0');
            max_count = max(max_count, count);

            ans += to_string(count) + s[i];
            count = 0;
        }
    }

    if (max_char < max_count)
        ans = "-1";

    cout << ans << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    int i = 1;
    while (tc--)
    {
        solve(i);
        i++;
    }
    return 0;
}