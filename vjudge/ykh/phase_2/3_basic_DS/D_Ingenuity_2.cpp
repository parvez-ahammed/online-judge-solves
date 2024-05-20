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

    set<char> st;
    for (int i = 0; i < n; i++) {
        st.insert(s[i]);
    }

    if (n == 1 or (st.size() == 1 and n % 2 == 1)) {
        cout << "NO" << endl;
        return;
    }

    if (n == 2) {
        if (s[0] != s[1]) {
            cout << "NO" << endl;
        } else {

            cout << "RH" << endl;
        }
        return;
    }

    map<char, int> mp, mp2;
    for (int i = 0; i < n; i++) {
        mp[s[i]]++;
        mp2[s[i]]++;
    }

    
    int cntS = mp['S'];
    int cntN = mp['N'];

    int minSN = min(cntS, cntN);
    

    if ((mp['S'] + mp['N']) % 2 == 1 or (mp['E'] + mp['W']) % 2 == 1) {
        cout << "NO" << endl;
        return;
    }

    vector<int> R = { mp['N'] / 2, mp['S'] / 2, mp['E'] / 2, mp['W'] / 2 }, H;
    H = R;

    int sum = accumulate(R.begin(), R.end(), 0);

    if (sum == 0) {
        if (minSN > 1) {
            R[0] = 1;
            R[1] = 1;
        } else {
            R[2] = 1;
            R[3] = 1;
        }
       
    }

    string ans = "";

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'N') {
            ans += (R[0] > 0 ? 'R' : 'H');
            R[0] -= (R[0] > 0);
        } else if (s[i] == 'S') {
            ans += (R[1] > 0 ? 'R' : 'H');
            R[1] -= (R[1] > 0);
        } else if (s[i] == 'E') {
            ans += (R[2] > 0 ? 'R' : 'H');
            R[2] -= (R[2] > 0);
        } else {
            ans += (R[3] > 0 ? 'R' : 'H');
            R[3] -= (R[3] > 0);
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