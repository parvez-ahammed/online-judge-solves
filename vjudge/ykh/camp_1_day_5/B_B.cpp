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

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '7') {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}