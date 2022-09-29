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
    vector<int> v(n, 0);
    vector<int> a(n, 0);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] < v[i - 1] && i > 1)
        {
            count++;
            
        }
    }

    // cout << "possible = " << possible << endl;
    if (count == 0)
    {
        a[0] = v[0];

        for (int i = 1; i < n; i++)
        {
            a[i] = v[i] + a[i - 1];
        }

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << "\n";
    }
    else
        cout << -1 << "\n";
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