#include <bits/stdc++.h>
using namespace std;
/**----data type----*/

struct person
{
    int x, y;
};

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    person vika;
    person friend_;

    cin >> vika.x >> vika.y;
    bool possible = true;
    for (int i = 0; i < k; i++)
    {
        cin >> friend_.x >> friend_.y;

        possible = (abs(friend_.x - vika.x) + abs(friend_.y - vika.y)) % 2 == 0 ? false : possible;
    }

    possible ? cout << "YES" << endl : cout << "NO" << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}