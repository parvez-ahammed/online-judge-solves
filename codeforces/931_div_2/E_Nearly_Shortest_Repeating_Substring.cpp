#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

bool matchString(string s, string k)
{
    int n = s.size();
    int len = k.size();

    int x = n / len;
    string temp = "";
    for (int i = 0; i < x; i++) {
        temp += k;
    }

    int misCount = 0;

    for (int i = 0; i < n; i++) {

        if (s[i] != temp[i]) {

            if (misCount == 1) {
                return false;
            }
            misCount++;
        }
    }

    return true;
}
bool check(string s, int len)
{
    int n = s.size();

    if (n % len != 0) {
        return false;
    }

    string takingFirst = s.substr(0, len);

    bool forFirst = matchString(s, takingFirst);

    string takingLast = s.substr(n - len, len);

    bool forLast = matchString(s, takingLast);

    return (forFirst || forLast);
}

int binSearch(string s)
{
    int lo = 1, hi = s.size();
    int ans = s.size();

    for (int i = 1; i <= s.size() /2; i++) {
        if (check(s, i)) {
            ans = i;
            break;
        }
    }

    // while (lo <= hi) {
    //     int mid = lo + (hi - lo) / 2;

    //     cout << mid << endl;

    //     if (check(s, mid)) {
    //         ans = mid;
    //         hi = mid - 1;
    //     } else {
    //         lo = mid + 1;
    //     }
    // }

    return ans;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    cout << binSearch(s) << endl;

    //cout << boolalpha << check(s, 2) << endl;
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