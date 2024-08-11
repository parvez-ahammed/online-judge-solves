#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{
    int n;
    cin >> n;
    deque<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        if (a.front() != b.front() and a.front() != b.back()) {
            cout << "Alice" << endl;

            return;
        }

        if (a.back() != b.front() and a.back() != b.back()) {
            cout << "Alice" << endl;
            return;
        }

        if (a.front() == b.front()) {
            a.pop_front();
            b.pop_front();
        } else if (a.front() == b.back()) {
            a.pop_front();
            b.pop_back();
        } else if (a.back() == b.front()) {
            a.pop_back();
            b.pop_front();
        } else if (a.back() == b.back()) {
            a.pop_back();
            b.pop_back();
        }
    }

    cout << "Bob" << endl;
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