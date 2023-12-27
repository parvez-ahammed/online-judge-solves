#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

// PRS

char getOptimalFor(char ch)
{
    if (ch == 'R')
        return 'P';
    if (ch == 'S')
        return 'R';
    if (ch == 'P')
        return 'S';
}

void solve()
{

    int n;
    cin >> n;
    string str;
    cin >> str;


    reverse(str.begin(), str.end());
    string ans = "";


    int haveToWin = n / 2 + 1;
    for (int i = 0; i < haveToWin; i++) {
        ans += getOptimalFor(str[i]);
    }

    int cntR = 0;
    int extraCheck = n - haveToWin;

    for (int i = haveToWin; i < n; i++) {
        ans += 'P';
        cntR += str[i] == 'R';
    }

    reverse(ans.begin(), ans.end());

    for (int i = extraCheck; i < n; i++) {
        if (cntR == 0)
            break;
        if (ans[i] != 'P') {
            ans[i] = 'P';
            cntR--;
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