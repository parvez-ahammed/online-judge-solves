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
    int a = 0, b = 0, x;
    rep(0, n) cin >> x, x < 0 ? b += x : a += x;

    cout << a - b << endl;
    return 0;
}