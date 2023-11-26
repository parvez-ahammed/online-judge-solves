#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int check(int a, int b)
{
    return (abs(a - b) % 2 == 0);
}
void solve()
{

    int a, b, c;
    cin >> a >> b >> c;

    int first = check(b, c);
    int second = check(a, c);
    int third = check(a, b);

    cout << first << " " << second << " " << third << endl;
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