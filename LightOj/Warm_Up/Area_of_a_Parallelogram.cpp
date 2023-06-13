#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
#define Reverse(x) reverse(x.begin(), x.end())

double distance(int ax, int ay, int bx, int by)
{
    return sqrt(pow(ax - bx, 2) + pow(ay - by, 2));
}

void solve()
{
    int ax, ay, bx, by, cx, cy, dx = 0, dy = 0;
    cin >> ax >> ay >> bx >> by >> cx >> cy;

    double ab = distance(ax, ay, bx, by);
    double bc = distance(bx, by, cx, cy);
    double ac = distance(ax, ay, cx, cy);
    double s = ((ab + bc + ac) / (2.0));
    double area = ((sqrt(s * (s - ab) * (s - bc) * (s - ac))));
    area *= 2;
    

    dx = ax + cx - bx;
    dy = ay + cy - by;

    cout  << fixed << setprecision(0)<< dx << " " << dy << " " << (int)area << endl;
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