#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int mp[200005];
int cum[200005];

int sumOfDigits(int n)
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
    cout << cum[n] << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 1; i <= 200000; i++) {
        mp[i] = sumOfDigits(i);
        cum[i] = cum[i - 1] + mp[i];
    }

    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}