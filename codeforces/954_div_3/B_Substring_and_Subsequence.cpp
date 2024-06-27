#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int findMatch(string a, string b)
{
    int i = 0, j = 0;
    int cnt = 0;
    while (i < a.size() and j < b.size()) {
        if (a[i] == b[j]) {
            i++;
            j++;
            cnt++;
        } else {
            i++;
        }
    }

    return cnt;
}
void solve()
{

    string a, b;
    cin >> a >> b;

    int ans = a.size();

    vector<int> extra(b.size(), 0);

    for (int i = 0; i < b.size(); i++) {
        string val = b.substr(i, b.size() - i);

        int matchCnt = findMatch(a, val);

        extra[i] = b.size() - matchCnt;
    }

    int minExtra = *min_element(extra.begin(), extra.end());

    cout << ans + minExtra << endl;
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