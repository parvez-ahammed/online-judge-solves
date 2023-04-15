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
    string s;
    cin >> s;
    int moves = 0;
    vector<int> v;

    for (int i = 0; i < s.size(); i++)
    {
        s[i] == '^' ? v.push_back(0) : v.push_back(1);
    }

    if (v.size() == 1)
    {
        v[0] == 0 ? cout << 1 << endl : cout << 2 << endl;
        return;
    }

    if (v[0] == 1)
    {
        moves += 1;
        v.insert(v.begin(), 0);
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 1)
        {
            if (v[i + 1] != 0)
            {
                moves += 1;
                v.insert(v.begin() + i + 1, 0);
            }
        }
    }

    if (v[v.size() - 1] == 1)
    {
        moves += 1;
        v.push_back(0);
    }
   

    cout << moves << endl;
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