#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{

    int x;
    cin >> x;
    cout << 32 << endl;
    vector<int> v(32, 0);
    int temp = x;

    int k = 0;
    while (temp) {
        int contrib = 1;
        if ((temp -1 ) % 4 == 0) {
            v[k] = 1;
            contrib -=2;
        } else if (temp%2) {
            v[k] = -1;
            contrib += 1;
        }

        temp += contrib;
        temp /= 2;
        k++;
    }

    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
        //sum += pow(2, i) * v[i];
    }
    cout << endl;

   // cout << (sum == x) << endl;
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

// 27
// 00001
// 10100