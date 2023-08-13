#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

void solve()
{

    int n;
    cin >> n;
    double sum = 0;
    double grade = 0;
    rep(0, n - 1) cin >> grade, sum += grade;

    double perfect = (3.50 * 8);
    double need_total = (perfect - sum);
    double semester_left = 9 - n;

    double need = need_total / semester_left;

    if (need > 3.7 || need < 2)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        cout << fixed << setprecision(2) << need << endl;
    }
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}