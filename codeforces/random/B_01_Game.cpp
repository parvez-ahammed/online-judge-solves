#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

void solve()
{

    string str;
    cin >> str;

    int n = str.size();

    int zeros = count(str.begin(), str.end(), '0');
    int ones = str.size() - zeros;

    int pairs = min(ones, zeros);

    if (pairs & 1)
        cout << "DA" << endl;
    else
        cout << "NET" << endl;
}
int32_t main()
{

    FAST;

    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}