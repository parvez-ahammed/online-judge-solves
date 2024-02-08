#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void print(vector<int>& a)
{
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void solve()
{

    int n, k;

    cin >> n >> k;

    int half = n / 2;

    int minSum = 3 * half;
    ll maxSum = (1ll * half * 99999) + (1ll * half * 100000);
    if (k < minSum or k > maxSum) {
        cout << -1 << endl;
        return;
    }

    int oddHalf, evenHalf;
    evenHalf = max(2 * half, k / 2);
    evenHalf += (evenHalf % 2);
    oddHalf = k - evenHalf;

    if ((oddHalf % 2) != (half % 2)) {
        cout << -1 << endl;
        return;
    }

    int oddVal = oddHalf / half;
    oddVal -= (oddVal % 2 ? 0 : 1);

    int evenVal = evenHalf / half;
    evenVal -= (evenVal % 2);
    vector<int> ans;
    for (int i = 0; i < half; i++) {
        ans.push_back(oddVal);
        ans.push_back(evenVal);
    }
    int leftFrac = k - (oddVal * half + evenVal * half);

    for (int i = 0; i < ans.size(); i++) {
        int diff = 0;
        int upper = (ans[i] % 2 == 0 ? 100000 : 99999);

        diff = min(upper - ans[i], leftFrac);
        ans[i] += diff;
        leftFrac -= diff;
    }

    print(ans);
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