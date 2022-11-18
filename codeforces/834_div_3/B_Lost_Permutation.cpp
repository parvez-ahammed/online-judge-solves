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
    ll m, s;
    cin >> m >> s;

    vector<int> v(3000, 0);
    int temp;

    int max_number = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        max_number = max(max_number, temp);
        v[temp] = 1;
    }
    int result = 0;
    bool possible = false;
    int missing = max_number - m;
    int added = 0;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            added += 1;
            result += i;
        }
        if (result == s && added >= missing)
        {
            possible = true;
            break;
        }
        else if (result > s)
            break;
    }

    possible ? cout << "YES" << endl : cout << "NO" << endl;
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