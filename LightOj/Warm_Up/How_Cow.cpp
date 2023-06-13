#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
#define Reverse(x) reverse(x.begin(), x.end())

void solve()
{

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;

        (a >= x1 && a <= x2 && b >= y1 && b <= y2) ? cout << "Yes" : cout << "No";
        cout << endl;
    }
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
        cout << "Case " << i++ << ": "<<endl;
        solve();
    }
    return 0;
}