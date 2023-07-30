#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int ans;
    if (n == 0)
        ans = 1;
    else if (n % 4 == 0)
        ans = 6;
    else if (n % 4 == 1)
        ans = 8;
    else if (n % 4 == 2)
        ans = 4;
    else
        ans = 2;

    cout << ans << endl;
    return 0;
}