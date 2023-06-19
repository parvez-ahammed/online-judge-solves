#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
#define Reverse(x) reverse(x.begin(), x.end())

double calculateArea(double r)
{
    return r * r * (22.0 / 7.0);
}

double BS(double target, double n)
{
    double lo = 1, hi = 1000;
    double ta = 0;

    double mid = 0;

    while (hi - lo > 1)
    {
        mid = (lo + hi) / 2;

        ta = calculateArea(mid) * n;
        //cout  << fixed << setprecision(6)<< target - ta << endl;

        if (target - ta <= .000000001 && target - ta  >= 0)
            break;
        if (ta > target)
            hi = mid - 1;
        else
            lo = mid + 1;
    }

    return mid;
}
void solve()
{
    double R, n;
    cin >> R >> n;

    double big_area = calculateArea(R);
    cout << BS(big_area, n) << endl;
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