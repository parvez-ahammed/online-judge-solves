#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
#define Reverse(x) reverse(x.begin(), x.end())

double distance(int ax, int ay, int bx, int by)
{
    return sqrt(pow(ax - bx, 2) + pow(ay - by , 2));
}
void solve()
{
    int ox, oy, ax, ay, bx, by;
    cin >> ox >> oy >> ax >> ay >> bx >> by;

    double oa = distance(ox, oy, ax, ay);
    double ob = distance(ox, oy, bx, by);
    double ab = distance(ax, ay, bx, by);
    double angle = acos((pow(oa, 2) + pow(ob, 2) - pow(ab, 2)) / (2 * oa * ob));

    cout << fixed << setprecision(8)<< oa * angle << endl;

    // arc lengt =
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