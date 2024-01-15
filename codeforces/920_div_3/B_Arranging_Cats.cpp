#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int count1(string s)
{
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            count++;
        }
    }
    return count;
}
void solve()
{

    // given binary string
    // one index can be made 1 or 0
    // two indices that are different can be switched

    int n;
    cin >> n;

    string s, f;

    cin >> s >> f;

    if (s == f) {
        cout << 0 << endl;
        return;
    }

  

    int ans = 0;

    string newS , newF;

    for (int i = 0; i < n; i++) {
        if (s[i] != f[i]) {
            newS += s[i];
            newF += f[i];
        }
    }

    

    int sCnt1 = count1(newS);
    int sCnt0 = newS.size() - sCnt1;

    int fCnt1 = count1(newF);
    int fCnt0 = newF.size() - fCnt1;

    
    int swapLagbe = min(fCnt1, fCnt0);
    swapLagbe = min ({swapLagbe, sCnt1, sCnt0});
    fCnt0 -= swapLagbe;
    fCnt1 -= swapLagbe;
    ans = swapLagbe + fCnt0 + fCnt1;



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