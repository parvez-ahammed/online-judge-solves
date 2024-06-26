#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n <= 2) {
        cout << stoi(s) << endl;
        return;
    }

    if (n == 3) {
        int val1 = s[0] - '0';
        int val2 = ((s[1] - '0') * 10) + (s[2] - '0');

        int val3 = ((s[0] - '0') * 10) + (s[1] - '0');
        int val4 = s[2] - '0';
        cout << min({ val1 + val2, val1 * val2, val3 + val4, val3 * val4 }) << endl;
        return;
    }

    if (count(s.begin(), s.end(), '0') >= 1) {
        cout << 0 << endl;
        return;
    }

    int minVal = INT_MAX;
    for (int i = 0; i < n - 1; i++) {
        if (s[i + 1] != '1') {
            minVal = min(minVal, stoi(s.substr(i, 2)));
        }
    }

    if (s.find("11") != string::npos and (minVal == INT_MAX or minVal > 20))
        minVal = 11;

    int sum = minVal;
    string minStr = to_string(minVal);

    for (int i = 0; i < n - 1; i++) {

        if (s.substr(i, 2) == minStr) {
            s[i] = '1';
            s[i + 1] = '1';
            minStr = "00";
        }
        
        if (s[i] != '1') {
            sum += s[i] - '0';
        }
    }

    

    cout << sum << endl;
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