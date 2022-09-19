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

    ll n, m;

    cin >> n >> m;
    vector<ll> v1, v2;
    ll temp;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v1.push_back(temp);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        v2.push_back(temp);
    }

    for (int i = 0; i < n; i++)
    {
        if (v1[i] == v2[0])
            v2.erase(v2.begin());  
    }

 
    if (v2.size() == 0)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
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