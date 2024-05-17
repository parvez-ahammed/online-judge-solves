#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"


void solve() { 

    ll n ;
    cin >> n;
    vector<int> sum = {0, 1, 3, 6, 10, 15, 21, 28, 36, 45};

    ll divide = n / 9;
    ll initialSum = sum[9] * divide;
    initialSum += sum[n % 9];
    cout << initialSum << endl;
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