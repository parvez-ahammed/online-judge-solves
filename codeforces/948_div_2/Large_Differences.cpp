#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mainSum = 0;

    for (int i = 0; i < a.size() - 1; i++) {
        mainSum += abs(a[i] - a[i + 1]);
    }
   

    int sum = 0;

    for (int i = 0; i < n - 1; i++) {
        int val = a[i];
    
        int sum1 = 0, sumK = 0, sumOrig= 0;

        if (i == 0) {
            sum1 = abs(1 - a[i + 1]);
            sumK = abs(k - a[i + 1]);
            sumOrig = abs(a[i] - a[i + 1]);
        }else{
            sum1 = abs(a[i -1 ] - 1) + abs(1 - a[i + 1]);
            sumK = abs(a[i -1 ] - k) + abs(k - a[i + 1]);
            sumOrig = abs(a[i-1] - a[i]) + abs(a[i] - a[i + 1]);
        }

        sum = max ({sum , mainSum  , mainSum - sumOrig + sum1 , mainSum - sumOrig + sumK});
        
    }

    int sum1 = abs (a[n-2] - 1);
    int sumK = abs (a[n-2] - k);
    int sumOrig = abs (a[n-2] - a[n-1]);

    sum = max ({sum , mainSum - sumOrig + sum1 , mainSum - sumOrig + sumK});
    cout << sum << endl;
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