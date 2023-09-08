#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
double c;

bool ok(double x)
{
    return (x * x + sqrt(x)) >= c;
}

double binSearch()
{
    double l = 0, r = c, mid, ans;

    int iterations = 200;

    while (iterations--) {
        mid = (l + r) / 2.0;

        ok(mid) ? (ans = r = mid) : l = mid;
    }

    return ans;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> c;

    cout << fixed << setprecision(15) << binSearch() << endl;
    return 0;
}