#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
vector<vector<int>> point(10, vector<int>(10, 0));
void solve()
{
    vector<string> v(10);

    for (int i = 0; i < 10; i++) {
        cin >> v[i];
    }

    int cnt = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (v[i][j] == 'X') {
                cnt += point[i][j];
            }
        }
    }

    cout << cnt << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    point = { { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 2, 2, 2, 2, 2, 2, 2, 2, 1 },
        { 1, 2, 3, 3, 3, 3, 3, 3, 2, 1 },
        { 1, 2, 3, 4, 4, 4, 4, 3, 2, 1 },
        { 1, 2, 3, 4, 5, 5, 4, 3, 2, 1 },
        { 1, 2, 3, 4, 5, 5, 4, 3, 2, 1 },
        { 1, 2, 3, 4, 4, 4, 4, 3, 2, 1 },
        { 1, 2, 3, 3, 3, 3, 3, 3, 2, 1 },
        { 1, 2, 2, 2, 2, 2, 2, 2, 2, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 } };


    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}