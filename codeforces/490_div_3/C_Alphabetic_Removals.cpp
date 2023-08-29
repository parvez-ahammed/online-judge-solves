#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    string str;
    cin >> n >> k >> str;

    map<char, int> occ;

    for (int i = 0; i < n; i++) {
        occ[str[i]]++;
    }

    char ch = 'a';
    while (k--) {
        if (occ[ch] > 0)
            occ[ch]--;
        else {
            while (occ[ch] == 0) {
                ch++;
            }

            occ[ch]--;
        }
    }

    string ans = "";

    for (int i = str.size() - 1; i >= 0; i--) {
        if (occ[str[i]] > 0) {
            ans += str[i];

            occ[str[i]]--;
        }
    }

    reverse(ans.begin(), ans.end());

    cout << ans << endl;

    return 0;
}