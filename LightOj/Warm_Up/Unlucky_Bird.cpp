#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
#define Reverse(x) reverse(x.begin(), x.end())
void solve()
{
    double v1, v2, v3, a1, a2;

    cin >> v1 >> v2 >> v3 >> a1 >> a2;

    double t1 = v1 / a1, t2 = v2 / a2;
    double t3 = max(t1, t2);
    double s3 = v3 * t3;
    double s1 = v1 * t1 - .5 * a1 * t1 * t1  , s2 =v2 * t2 - .5 * a2 * t2 * t2  ;


    cout << fixed << setprecision(9) << s1 + s2 << " " << s3 << endl;
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