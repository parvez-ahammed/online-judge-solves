#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int sumOfDigits(int n)

{
    int sum = 0;

    while (n) {

        sum += n % 10;
        n /= 10;
    }

    return sum;
}

void solve()
{

    int n;
    cin >> n;
    vector<int> v(n), sumVec;
    map<int, priority_queue<int>> mp;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i++) {

        int sum = sumOfDigits(v[i]);
        sumVec.push_back(sum);
        mp[sum].push(v[i]);
    }

    ll ans = -1;

    for (int i = 0; i < n; i++) {

        if (mp[sumVec[i]].size() > 1) {

            ll ind0 = mp[sumVec[i]].top();
            mp[sumVec[i]].pop();

            ll ind1 = mp[sumVec[i]].top();
            mp[sumVec[i]].pop();
            ans = max(ans, ind1 + ind0);
        }
    }

    cout << ans << endl;
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