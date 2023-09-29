#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve(int n, int m)
{
    vector<int> dragonDiameter(n);

    vector<int> knightHeight(m);

    for (int i = 0; i < n; i++)
        cin >> dragonDiameter[i];

    for (int i = 0; i < m; i++)
        cin >> knightHeight[i];

    sort(dragonDiameter.begin(), dragonDiameter.end());
    sort(knightHeight.begin(), knightHeight.end());

    int ans = 0;
    int killed = 0;
    int knight = 0;
    for (int i = 0; i < n; i++) {

        

        if (knight == m)
            break;

        while (knightHeight[knight] < dragonDiameter[i] and knight < m)
            knight++;

        ans += knightHeight[knight];
        killed++;
        knight++;
    }

    if (killed < n)
        cout << "Loowater is doomed!" << endl;
    else
        cout << ans << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    while (cin >> n >> m) {

        if (n == 0 and m == 0)
            break;
        solve(n, m);
    }
    return 0;
}