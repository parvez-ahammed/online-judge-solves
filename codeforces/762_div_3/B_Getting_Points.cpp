#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"

int n, p, l, t;

void check()
{
    int mxPracCount = ceil((n * 1.0) / 7.0);
    int mxlessonCount = n;

    int ekDineMaxPoint = (2 * t) + l;

    int maxPointNiteParbeKotoDin = min(mxPracCount / 2, mxlessonCount);

    int optimalPoints = (maxPointNiteParbeKotoDin * ekDineMaxPoint);
    int workingDay = 0;
    if (optimalPoints > p) {

        workingDay += ceil((1.0 * p) / ekDineMaxPoint);

    } else {

        workingDay = maxPointNiteParbeKotoDin;

        int lessonBaki = mxlessonCount - maxPointNiteParbeKotoDin;
        int pointbakiThake = p - optimalPoints;

        if (mxPracCount & 1) {
            pointbakiThake -= t;
            pointbakiThake -= l;
            workingDay++;
        }

        if (pointbakiThake > 0)
            workingDay += ceil(1.0 * pointbakiThake / l);
    }

    cout << n - workingDay << endl;
}

void solve()
{

    cin >> n >> p >> l >> t;

    check();
}
int32_t main()
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