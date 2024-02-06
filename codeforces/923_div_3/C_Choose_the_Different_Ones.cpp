#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, m, k;
    cin >> n >> m >> k;

    map<int, int> a, b;

    int half = k / 2;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x <= k and a[x] == 0)
            a[x]++;
    }

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        if (x <= k and b[x] == 0)
            b[x]++;
    }

    if (a.size() < half or b.size() < half) {
        cout << "NO" << endl;
        return;
    }

    set<int> s;

    int aNeed = half;
    int bNeed = half;

    vector<int> lagbe;

    for (int i = 1; i <= k; i++) {
        if (a[i] == 0 and b[i] == 0) {
            cout << "NO" << endl;
            return;
        }

        if (a[i] == 0 and b[i] == 1) {
            bNeed--;
            s.insert(i);
            b.erase(i);
        }

        if (a[i] == 1 and b[i] == 0) {
            aNeed--;
            a.erase(i);
            s.insert(i);
        }

        if (a[i] == 1 and b[i] == 1) {
            lagbe.push_back(i);
        }
    }

    if (aNeed == 0 and bNeed == 0) {
        cout << "YES" << endl;
        return;
    }

    while (aNeed > 0 and lagbe.size() > 0) {
        int val = lagbe.back();
        s.insert(val);
        lagbe.pop_back();
        aNeed--;
    }

    while (bNeed > 0 and lagbe.size() > 0) {
        int val = lagbe.back();
        s.insert(val);
        lagbe.pop_back();
        bNeed--;
    }

    if (s.size() == k) {
        cout << "YES" << endl;
        return;
    } else {
        cout << "NO" << endl;
        return;
    }
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