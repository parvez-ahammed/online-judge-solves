#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int getDistance(pair<int, int> p1, pair<int, int> p2)
{
    int x = p1.first - p2.first;
    int y = p1.second - p2.second;

    return x * x + y * y;
}
void solve()
{

    vector<pair<int, int>> v(4);

    for (int i = 0; i < 4; i++) {
        cin >> v[i].first >> v[i].second;
    }

    /// these are the four points of the square
    // find the distance between the points

    set<int> s;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {

            if (i != j) {
                if (v[i].first == v[j].first || v[i].second == v[j].second) {
                    s.insert(getDistance(v[i], v[j]));
                }
                
            }
        }
    }

    for (auto x : s) {
        cout << x << " ";
    }
    cout << endl;
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