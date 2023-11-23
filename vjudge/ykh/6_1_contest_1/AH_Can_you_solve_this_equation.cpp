// #include <iomanip>
// #include <iostream>
// using namespace std;
// #define ll long long int
// #define endl "\n"

// double ok(double x)
// {
//     double res = ((8 * x * x * x * x) + (7 * x * x * x) + (2 * x * x) + (3 * x) + 6);
//     return res;
// }

// double binarySearch(double y)
// {
//     int iterations = 100;

//     double l = 0, r = 100, ans = 0;

//     while (iterations--) {
//         double x = (l + r) / 2;

//         double foundY = ok(x);

//         if (foundY >= y) {
//             ans = x;
//             r = x;
//         } else
//             l = x;
//     }

//     return ans;
// }
// void solve()
// {

//     double y;
//     cin >> y;

//     double ans = binarySearch(y);

//     if (y < ok(0) || y > ok(100))
//         cout << "No solution!" << endl;
//     else
//         cout << fixed << setprecision(4) << ans << endl;
// }
// int main()
// {

//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int tc = 1;
//     cin >> tc;
//     while (tc--) {
//         solve();
//     }
//     return 0;
// }


#include <iomanip>
#include <iostream>
using namespace std;
#ifdef LOCAL
// #define cerr cout
#include "algo/debug.h"
#else
#define deb(...) 30
#endif
#define ll long long
#define all(x) (x).begin(), (x).end()
#define f(i, n) for (int i = 0; i < n; i++)
bool fun(double d, int n)
{
    return (8 * d * d * d * d + 7 * d * d * d + 2 * d * d + 3 * d + 6) >= n;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, it = 100;
        cin >> n;
        double l = 0, r = 110, ans = -1, mid;
        while (it--)
        {
            mid = (l + r) / 2;
            if (fun(mid, n))
            {
                ans = mid, r = mid;
            }
            else
                l = mid;
        }
        if (ans == -1 || ans > 100.0 || n < 6)
            cout << "No solution!\n";
        else
            cout << fixed << setprecision(4) << ans << '\n';
    }

    return 0;
}