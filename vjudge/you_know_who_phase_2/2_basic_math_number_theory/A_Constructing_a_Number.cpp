#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int getDigitsSum(int n)
{
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
void solve()
{

    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += getDigitsSum(x);
    }
    cout << (sum % 3 == 0 ? "Yes" : "No") << endl;
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