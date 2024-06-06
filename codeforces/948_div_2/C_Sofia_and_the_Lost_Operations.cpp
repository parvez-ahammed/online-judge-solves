#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, m;
    cin >> n;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<int, int> bMap, invalidBMap;

    for (int i = 0; i < n; i++) {
        cin >> b[i];
        bMap[b[i]]++;

        if (a[i] != b[i]) {
            invalidBMap[b[i]]++;
        }
    }

    cin >> m;
    vector<int> d(m);
    for (int i = 0; i < m; i++) {
        cin >> d[i];
    }

    stack<int> s;
    for (int i = 0; i < m; i++) {
        if (bMap.find(d[i]) == bMap.end()) {
            s.push(d[i]);
        } else {
        
            if (invalidBMap[d[i]] > 0) {
                invalidBMap[d[i]]--;
            }
            while (!s.empty()) {
                s.pop();
            }
        }
    }

    int sum = 0;
    for (auto x : invalidBMap) {
        sum += x.second;
    }

    if (s.size() + sum == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
/*
4
3 1 7 8
2 2 7 10
5
10 3 2 2 1



4
2 2 7 10
2 2 7 10


4  1 1 2
10 3 2 2 1 <--


*/
