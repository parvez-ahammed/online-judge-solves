#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define llu unsigned long long int
#define Sort(x) sort(x.begin(), x.end())
#define SortR(x) sort(x.begin(), x.end(), greater<int>())
#define Reverse(x) reverse(x.begin(), x.end())
#define sq(x) (x) * (x)
#define mid(l, r) (l + (r - l) / 2)
int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};

void solve()
{
    int n;
    cin >> n;

    ll primary_sum = 0, sec_sum = 0;
    ll temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            if (i == j)
                primary_sum += temp;
            if ((n - i-1) == j)
            {
                // cout << temp << endl;
                sec_sum += temp;
            }
        }
    }

    // cout << primary_sum << endl;
    // cout << sec_sum << endl;

    cout << abs(primary_sum - sec_sum) << "\n";
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}