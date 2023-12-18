#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    string str;
    cin >> str;
   

    for (int i = 1; i < str.size(); i++) {
        string A = str.substr(0, i);
        string B = str.substr(i, str.size() - i);

        int a = stoi(A);
        int b = stoi(B);

        if (a < b and to_string(a).size() == A.size() and to_string(b).size() == B.size()) {
            cout << a << " " << b << endl;
            return;
        }
    }

    cout << -1 << endl;
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