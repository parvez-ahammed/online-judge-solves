#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
double px, py, ax, ay, bx, by;

double dist(double x1, double y1, double x2, double y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

double insideCircle(double x, double y, double cx, double cy, double r)
{
    return dist(x, y, cx, cy) <= r;
}
bool ok(double w)
{


    bool pointInsideFIrstCircle = insideCircle(px, py, ax, ay, w);
    bool humanInsideFirstCircle = insideCircle(0, 0, ax, ay, w);
    if (pointInsideFIrstCircle and humanInsideFirstCircle)
        return true;

    bool pointInsideSecondCircle = insideCircle(px, py, bx, by, w);
    bool humanInsideSecondCircle = insideCircle(0, 0, bx, by, w);
    if (pointInsideSecondCircle and humanInsideSecondCircle)
        return true;


    double d = dist(ax, ay, bx, by);

    if ((pointInsideFIrstCircle and humanInsideSecondCircle) or (pointInsideSecondCircle and humanInsideFirstCircle))
        return d <= 2 * w;

    return false;
}

double bs()
{
    double l = 0, r = 1e6 + 5, mid = 0, ans = 0;

    int iterations = 100;

    while (iterations--) {
        mid = (l + r) / 2.0;

        if (ok(mid)) {
            ans = mid;
            r = mid;
        } else {
            l = mid;
        }
    }

    return ans;
}
void solve()
{

    cin >> px >> py >> ax >> ay >> bx >> by;

    cout << fixed << setprecision(10) << bs() << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--) {
        solve();
    }
    return 0;
}