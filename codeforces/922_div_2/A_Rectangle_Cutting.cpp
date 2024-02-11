#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void print(bool condition)
{
    if (condition) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
void solve()
{

    int a, b;
    cin >> a >> b;

    if (a > b) {
        swap(a, b);
    }

    if (b % 2 == 0) {
        int bHalf = b / 2;
        print(bHalf != a or (bHalf == a and a % 2 == 0));
    } else if (a % 2 == 0) {
        print(true);
    } else {
        print(false);
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