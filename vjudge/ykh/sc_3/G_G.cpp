#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

map<string, int> mp1;

void processString(string str)
{
    map<char, int> mp;
    int cnt = 0;
    string modified = "";

    for (int i = 0; i < str.size(); i++) {
        if (mp.count(str[i]) == 0) {
            mp[str[i]] = cnt++;
        }
        modified += to_string(mp[str[i]]);
    }

    mp1[modified]++;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while (n--) {
        string str;
        cin >> str;
        processString(str);
    }

    ll totalPairs = 0;

    for (auto it : mp1) {

        totalPairs += ((1ll * it.second) * (it.second - 1)) / 2;
    }

    cout << totalPairs << endl;

    return 0;
}