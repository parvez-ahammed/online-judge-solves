#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int getAns(vector<int>& a, int val)
{

    int n = a.size();
    int leftSide = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] != val) {
            break;
        }
        leftSide++;
    }

    int rightSide = n - 1;

    for (int i = n - 1; i > 1; i--) {

        if (a[i] != val) {
            break;
        }
        rightSide--;
    }

    if (leftSide > rightSide) {
        return 0;
    }

    return rightSide - leftSide + 1;
}
void solve()
{

    int n;
    cin >> n;
    vector<int> a(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    if (n == 1) {
        cout << 0 << endl;
        return;
    }

    int first = getAns(a, a[1]);
    int last = getAns(a, a[n]);

  

    cout << min(first, last) << endl;
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