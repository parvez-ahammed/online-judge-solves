#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
#define Reverse(x) reverse(x.begin(), x.end())
void solve()
{
    int n, p, q;
    cin >> n >> p >> q;
    int x;
    int count = 0;
    rep(1, n + 1)
    {

        cin >> x;

        if (i <= p && x <= q)
        {
            count++;
            q -= x;
        }
    }

    cout << count << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    int i = 1;
    cin >> tc;
    while (tc--)
    {
        cout << "Case " << i++ << ": ";
        solve();
    }
    return 0;
}