#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{
    int n, q;

        cin >> n >> q;
    deque<pair<int, int>> v;

    for (int i = 0; i < n; i++) {
        v.push_back({ i+1, 0 });
    }

    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            char c;
            cin >> c;

            pair<int, int> p = v.front();

            if (c == 'R')
                p.first++;

            if (c == 'L')
                p.first--;

            if (c == 'U')
                p.second++;

            if (c == 'D')
                p.second--;

            v.push_front(p);
            v.pop_back();
        } else {
            int p;
            cin >> p;
            p--;
            cout << v[p].first << " " << v[p].second << endl;
        }
    }
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}