#include <iomanip>
#include <iostream>
using namespace std;
#define ll long long int
#define endl "\n"

double ok(double x)
{
    double res = ((8 * x * x * x * x) + (7 * x * x * x) + (2 * x * x) + (3 * x) + 6);
    return res;
}

double binarySearch(double y)
{
    int iterations = 100;

    double l = 0, r = 100, ans = 0;

    while (iterations--) {
        double x = (l + r) / 2;

        double foundY = ok(x);

        if (foundY >= y) {
            ans = x;
            r = x;
        } else
            l = x;
    }

    return ans;
}
void solve()
{

    double y;
    cin >> y;

    double ans = binarySearch(y);

    if (y < ok(0) || y > ok(100))
        cout << "No solution!" << endl;
    else
        cout << fixed << setprecision(4) << ans << endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}