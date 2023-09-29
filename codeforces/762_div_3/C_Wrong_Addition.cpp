#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    string a, s;
    cin >> a >> s;

    string b = "";

    int sz = a.size();


    deque<int> dq;
    int curr = s.size() - 1;

    for (int i = sz - 1; i >= 0; i--) {

        if (curr < 0) {
            cout << -1 << endl;
            return;
        }

        int uporer = a[i] - '0';
        string temp = "";
        temp += s[curr];

        int niche = stoi(temp);

        if (uporer > niche) {
            curr--;
            if (curr < 0) {
                cout << -1 << endl;
                return;
            }
            temp += s[curr];
            reverse(temp.begin(), temp.end());
        }

        niche = stoi(temp);

        int majher = stoi(temp) - uporer;

        if (majher < 0 or majher > 9) {
            cout << -1 << endl;
            return;
        }

        dq.push_front(majher);
        curr--;
    }

    for (int i = curr; i >= 0; i--) {
        dq.push_front(s[i] - '0');
    }

    string temp = "";

    for (auto x : dq) {

        temp += to_string(x);
    }

    cout << stoi(temp) << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
