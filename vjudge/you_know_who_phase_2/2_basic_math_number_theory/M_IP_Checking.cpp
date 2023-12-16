#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"

void solve()
{

    string first;
    cin >> first;

    string second = "";

    for (int i = 1; i <= 4; i++) {
        string temp = "";

        for (int i = 1; i <= 8; i++) {
            char ch;
            cin >> ch;

            temp += ch;
        }

        if (i != 4) {
            char dot;
            cin >> dot;
        }

        bitset<8> val(temp);
        second += to_string(val.to_ulong());

        if (i != 4) {
            second += ".";
        }
    }

    cout << (first == second ? "Yes" : "No") << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    int i = 1;
    cin >> tc;
    while (tc--) {
        cout << "Case " << i++ << ": ";
        solve();
    }
    return 0;
}