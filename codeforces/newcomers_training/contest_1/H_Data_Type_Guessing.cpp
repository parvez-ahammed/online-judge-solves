#include <bits/stdc++.h>
using namespace std;



void solve()
{

    double a, k, n;
    cin >> n >> k >> a;
    double res = (n * k) / a;
    long long num = res;
    double is_double = res - num;
    //cout << res << " - "  << num << " = "<< is_double <<endl;

    if (is_double > 0 && n != a && k!=a)
        cout << "double";
    else if (num <= 2147483647)
        cout << "int";
    else
        cout << "long long";

    cout << endl;
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