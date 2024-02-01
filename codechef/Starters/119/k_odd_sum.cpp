#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void printAns(vector<int> ans)
{
    int cnt = 0;

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";

        if (i + 1 < ans.size()) {
            cnt += (ans[i] + ans[i + 1]) % 2;
        }
    }
    cout << endl;

   // cout << "cnt = " << cnt << endl;
}
void solve()
{

    int n, k;
    cin >> n >> k;

    stack<int> even, odd;

    for (int i = 1; i <= n; i++) {

        if (i % 2 == 0)
            even.push(i);
        else
            odd.push(i);
    }
    vector<int> ans;
    if (k == n - 1) {
        for (int i = 1; i <= n; i++) {
            ans.push_back(i);
        }
        printAns(ans);
        return;
    }

    int origK = k;

    if (k % 2 == 0) {
        ans.push_back(even.top());
        even.pop();
        ans.push_back(odd.top());
        odd.pop();
        --k;
    }

    if (n % 2 == 1) {
        ans.push_back(odd.top());
        odd.pop();
    }

    int mix = k / 2;
    while (odd.size() > mix) {
        ans.push_back(odd.top());
        odd.pop();
    }

    while (mix > 0) {

        ans.push_back(even.top());
        ans.push_back(odd.top());
        even.pop();
        odd.pop();
        --mix;
    }

    while (!even.empty()) {
        ans.push_back(even.top());
        even.pop();
    }

    printAns(ans);
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