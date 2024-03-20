#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    string str;
    cin >> str;

    string ans = "";

    int cnt1 = 0;

    for (int i = 0; i < n; i++) {
        cnt1 += (str[i] == '1');
    }

    if (cnt1 <= k) {
        k -= cnt1;
        n -= cnt1;
        n -= k;

        for (int i = 0; i < n; i++) {
            ans += "0";
        }
        cout << ans << endl;
        return;
    }

    for (int i = 0; i < n; i++) {

        if (str[i] == '1' and k > 0) {

            string option1 = "";

            while (i < n and str[i] == '1' and k > 0) {
                option1 += "0";
                i++;
                k--;
                cnt1--;
            }

            if (i == n)
                ans += "";
            if (cnt1 == 0) {
                --i;
                ans += "";

            } else {
                --i;
                ans += option1;
            }

            continue;
        }

        ans += str[i];
    }

    if (k != 0) {
        int tempSize = ans.size();
        tempSize -= k;
        ans = ans.substr(0, tempSize);
    }

    // cout << boolalpha <<(ans < str) << endl;
    cout << ans << endl;
}
int main()
{

    vector<string> v = { "111", "001", "1", "01", "0" };

    sort(v.begin(), v.end());

    int tc;
    cin >> tc;

    while (tc--) {
        solve();
    }
}