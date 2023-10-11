#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll sum = 0, n, k;

    cin >> n >> k;

    vector<ll> v(n + 1, 0);

    for (ll i = 1; i <= n; i++) {
        cin >> v[i];
    }

    int r = 1;

    int len = -1;

    // outer loop is for left pointer
    for (int i = 1; i <= n; i++) {

        // inner loop is for right pointer
        while (r <= n) {

            // condition to break the loop
            if (sum + v[r] > k) {
                break;
            }
            sum += v[r];
            r++;
        }

        // update opreation

        len = max(len, r - i);

        sum -= v[i];
    }

    cout << len << endl;

    return 0;
}