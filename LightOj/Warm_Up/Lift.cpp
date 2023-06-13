#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
#define Reverse(x) reverse(x.begin(), x.end())
void solve()
{
    int perFloorTime = 4, myPos, liftPos;

    cin >> myPos >> liftPos;

    int myPosToDownLiftTime = myPos * perFloorTime;

    int ans = myPosToDownLiftTime + 19;

    ans += (perFloorTime * abs(liftPos - myPos));

    cout << ans << endl;
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