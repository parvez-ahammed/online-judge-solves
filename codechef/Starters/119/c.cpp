#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{

    int n, q;
    cin >> n >> q;
    string str;
    cin >> str;

    string sub = "";
    sub += str[0];

    priority_queue<pair<int, string>> pq;

    for (int i = 1; i < n; i++) {
        if (str[i] != sub.back()) {
            int sz = sub.size();
            pq.push({ sz, sub });
            sub = "";
        }

        sub += str[i];
    }

    int sz = sub.size();
    pq.push({ sz, sub });

    cout << pq.top().first << " ";

    while (q--) {
        char c;
        cin >> c;

        if (c != sub.back()) {
            int sz = sub.size();
            pq.push({ sz, sub });
            sub = "";
        }
        sub += c;

        int topSize = pq.top().first;
        int subSize = sub.size();

        cout << max (topSize , subSize) << " ";

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