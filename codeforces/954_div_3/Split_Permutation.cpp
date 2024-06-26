#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{
    int n;
    cin >> n;

    vector<int> ans;

    if (n % 2 == 1) {
        int mxSum = n;

        for (int i = 1; i < n; i += 2) {
            ans.push_back(i);
            ans.push_back(mxSum - i);
        }
        ans.push_back(n);

    } else {
        int mxSum = n +1;
        for (int i =1 ; i <= n /2 ; i++)
        {
            ans.push_back(i);
            ans.push_back(mxSum - i);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
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

// 1 --------------------------------------------- 1
// 1 2 ------------------------------------------- 1
// 1 2 3 ----------------------------------------- 2
// 1 4 2 3 --------------------------------------- 2
// 1 4 2 3 5 ------------------------------------- 3
// 1 6 4 3 2 5 ----------------------------------- 3
// 1 6 4 3 2 5 7 --------------------------------- 4
// 1 8 6 3 5 4 2 7 ------------------------------- 4