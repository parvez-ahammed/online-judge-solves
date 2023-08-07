#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

void solve()
{
    char first, second;
    cin >> first >> second;

    int initial = first - 'a';

    int start = initial * 25;

    int last_i = second - 'a' + 1;

    if (first < second)
        --last_i;

    cout << start  + last_i<< endl;
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