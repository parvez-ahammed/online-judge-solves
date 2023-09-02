#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;

    vector<int> v(n), mxs;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mxs.push_back(v[i]);
    }

    map<int, int> mp;

    sort(mxs.rbegin(), mxs.rend());

    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += mxs[i];
        mp[mxs[i]]++;
    }

    cout << sum << endl;

    int cnt = 0;

    vector<int> ans;

    for (int i = 0; i < n; i++) {

        if (mp[v[i]] > 0) {

            ans.push_back(i + 1);

            mp[v[i]]--;
        }
    }

    ans.insert(ans.begin(), 0);
    for (int i = 1; i < ans.size() - 1; i++) {

        cout << ans[i] - ans[i - 1] << " ";
    }
    cout << n - ans[ans.size() - 2] << endl;

    return 0;
}