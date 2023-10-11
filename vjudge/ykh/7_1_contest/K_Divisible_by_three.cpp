#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl '\n'
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int N = 1e6 + 9;
const int mod = 1e9 + 7;

void solve(int tc)
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    ll cnt = 0;
    ll sum = 0;
    map<ll, ll> mp;

    string str;
    for (int i = 0; i < n; i++) {
        sum += s[i] - '0';
        str += s[i];
        if (sum % 3 == 0) {
            cnt++;
        }
        if (mp.count(sum % 3)) {
            cnt += mp[sum % 3];
        }
        mp[sum % 3]++;

        cout << cnt << " " << sum%3 << " " << sum << " " << " " << str ;

        // for (int j = 0; j < str.size(); j++) {
        //     cout << (str[j] - '0') % 3 << " ";
        // }

        cout << endl;
    }
    cout << cnt << endl;
}

int32_t main()
{
    FAST;
    int tt = 1;
    cin >> tt;
    for (int i = 1; i <= tt; i++) {
        solve(i);
    }
}
