#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;
    string str;
    cin >> str;

    string ans = "";

    for (int i = 0; i < n; i++) {
        if (ans.empty()) {
            ans += str[i];
        } else {
            if (str[i] == '0') {

                if (ans.back() == '1') {
                    ans += '0';
                }
            } else {
                ans += str[i];
            }
        }
    }
   
    

    int cnt0 = 0, cnt1 = 0;
    for (int i = 0; i < ans.size(); i++) {
        cnt0 += (ans[i] == '0');
        cnt1 += (ans[i] == '1');
    }
    if (cnt1 >  cnt0) {
        cout << "Yes" << endl;
        return;
    }
    cout << "No" << endl;
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