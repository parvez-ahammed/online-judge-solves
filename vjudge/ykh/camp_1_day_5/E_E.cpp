#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    sort(s.begin(), s.end());

    vector<int> freq(26, 0);

    for (int i = 0; i < s.size(); i++) {
        freq[s[i] - 'A']++;
    }

    int sz = s.size();

    int odd = 0;

    for (int i = 0; i < 26; i++) {

        if (freq[i] % 2 == 1) {
            odd++;
        }
    }

    if (odd > 1 or (odd == 1 and sz % 2 == 0)) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    string ans = "";

    for (int i = 0; i < 26; i++) {

        for (int j = 0; j < freq[i] / 2; j++) {
            ans += (char)(i + 'A');
        }
    }

    string temp = ans;

    if (odd == 1) {

        for (int i = 0; i < 26; i++) {
            if (freq[i] % 2 == 1) {
                ans += (char)(i + 'A');
            }
        }
    }

    reverse(temp.begin(), temp.end());

    ans += temp;

    cout << ans << endl;

    return 0;
}