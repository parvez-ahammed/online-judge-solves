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
    ll n, k;
    cin >> n >> k;

    vector<int> v;
    int temp;
    int sorted = 0;
    bool found_1 = false;
    int rel_pos = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> temp;

        if (temp == 1)
        {
            found_1 = true;
            rel_pos = i;
        }

        if (found_1)
        {
            if (temp - 1 == (i - rel_pos))
                sorted++;
        }
    }


    if (sorted == n)
        cout << 0 << endl;
    else
    {
        cout << ceil(((n - sorted) / (float)k)) << endl;
    }
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