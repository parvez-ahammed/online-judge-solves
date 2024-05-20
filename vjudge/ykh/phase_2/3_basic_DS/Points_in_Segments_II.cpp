#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
#define Reverse(x) reverse(x.begin(), x.end())

const int N = 4e4 + 5;
int a[N];

void solve()
{

    int n, q;
    cin >> n >> q;

    vector<pair<int, int>> v(n);
    set<int> s;
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
        s.insert(v[i].first);
        s.insert(v[i].second);
    }

    vector<int> Q(q);
    for (int i = 0; i < q; i++) {
        cin >> Q[i];
        s.insert(Q[i]);
    }

    map<int, int> mp;
    int index = 1;

    for (auto x : s) {
        mp[x] = index++;
    }
    vector<int> occ(index + 5, 0);
    for (int i = 0; i < n; i++) {
        occ[mp[v[i].first]]++;
        occ[mp[v[i].second] + 1]--;
    }

    for (int i = 1; i <= index +1 ; i++) {
        occ[i] += occ[i - 1];
    }
    for (int i = 0; i < q; i++) {
        int x = mp[Q[i]];
        cout << occ[x] << endl;
    }
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    int i = 1;
    cin >> tc;
    while (tc--) {
        cout << "Case " << i++ << ": " << endl;
        solve();
    }
    return 0;
}