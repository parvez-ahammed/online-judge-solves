#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;
    vector<int> a(n + 1);
    bool bitNotFlipped = true;
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] %= 2;

        if (a[i] == 1 && bitNotFlipped) {
            bitNotFlipped = !bitNotFlipped;
            a[i] = 0;
        }

        if (a[i] == 0) {
            q.push(i);
        }
    }
    ll result = 0;

    for (int i = 1; i <= n; i++) {

        if (a[i] == 0) {
            result += (n - i + 1);
            q.pop();
        } else {
            result += (n - q.front() + 1);
        }
    }

    cout << result << endl;
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