#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int getLongestCons(string str, char ch)
{
    int longestConsecutive = 0;

    for (int i = 0; i < str.size(); i++) {
        int cnt = 0;
        while (i < str.size() and str[i] == ch) {
            cnt++;
            i++;
        }
        longestConsecutive = max(longestConsecutive, cnt);
    }

    return longestConsecutive;
}
void solve()
{

    string str;
    cin >> str;

    int cnt_1 = 0 , cnt_0 = 0;

    for (int i = 0; i < str.size(); i++) {
        cnt_1 += (str[i] == '1');
        cnt_0 += (str[i] == '0');
    }
   
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '1') {
            if (cnt_0)
                cnt_0--;
            else
                break;
        } else {
            if (cnt_1)
                cnt_1--;
            else
                break;
        }
    }

    cout << cnt_0 + cnt_1 << endl;
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