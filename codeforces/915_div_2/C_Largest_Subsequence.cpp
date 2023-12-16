#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void print(vector<int>& arr)
{
    for (auto x : arr) {
        cout << x << " ";
    }
    cout << endl;
}
void solve()
{

    int n;
    string str;
    cin >> n >> str;

    vector<int> num;

    for (int i = 0; i < n; i++) {
        num.push_back(str[i] - 'a' + 1);
    }

    if (is_sorted(num.begin(), num.end())) {
        cout << 0 << endl;
        return;
    }



    vector<int> suf(n);
    suf[n - 1] = num.back();
    for (int i = n - 2; i >= 0; i--) {
        suf[i] = max(suf[i + 1], num[i]);
    }

    vector<int> pos, val;

    int mx = INT_MIN;

    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        if (suf[i] == num[i]) {
            pos.push_back(i);
            val.push_back(num[i]);
            mx = max(mx, num[i]);
            mp[num[i]]++;
        }
    }

    sort(val.begin(), val.end());
    sort(pos.begin(), pos.end());

    for (int i = 0; i < pos.size(); i++) {
        num[pos[i]] = val[i];
    }

    if (is_sorted(num.begin(), num.end())) {
        cout << val.size() - mp[mx] << endl;
        return;
    }

    cout << -1 << endl;

    
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