#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    string str;
    cin >> str;

    if (is_sorted(str.begin(), str.end())) {
        str.pop_back();
        cout << str << endl;
        return;
    }

    for (int i = 0 ; i< n -1  ; i++)
    {
        if (str[i] > str[i + 1])
        {
            str.erase(str.begin() + i);
            cout << str << endl;
            return;
        }
    }
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