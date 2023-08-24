#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

void solve()
{
    int n, m;

    cin >> n >> m;

    vector<string> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    bool V = false, I = false, K = false, A = false;

    for (int i = 0; i < m; i++)
    {

        string got = "";
        for (int j = 0; j < n; j++)

            got += v[j][i];

        if (got.find('v') != string::npos and !V)
        {

            V = true;
            continue;
        }

        if (V and got.find('i') != string::npos and !I)
        {
            I = true;
            continue;
        }

        if (V and I and got.find('k') != string::npos and !K)
        {
            K = true;
            continue;
        }

        if (V and I and K and got.find('a') != string::npos and !A)
        {
            A = true;
            continue;
        }
    }
    if (V and I and K and A)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int32_t main()
{

    FAST;
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}