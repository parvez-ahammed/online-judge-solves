#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n), v;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    string str;
    cin >> str;
    int left = 0, right = n - 1;

    for (int i = 0; i < n; i++) {
        if (str[i] == 'L') {
            v.push_back(a[left]);
            left++;
        } else {
            v.push_back(a[right]);
            right--;
        }
    }

    reverse(v.begin(), v.end());
    vector<int> ans(n, 0);
    ll mul = 1;
    for (int i = 0; i < n; i++) {

        mul = (mul * v[i]) % m;
        ans[i] = mul;

        if (mul == 0)
            break;
    }

    reverse(ans.begin(), ans.end());

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