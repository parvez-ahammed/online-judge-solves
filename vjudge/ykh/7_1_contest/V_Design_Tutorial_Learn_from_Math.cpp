#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int mx = 1e6 + 7;

    vector<int> v(mx, 0);
    
    for (int i = 1; i < mx; i++) {
        for (int j = i; j < mx; j += i) {
            v[j]++;
        }
    }

    for (int i = 4; i <= n; i++) {

        int need = n - i;

        if (v[i] > 2 and v[need] > 2) {
            cout << i << " " << need << endl;
            return 0;
        }
    }

    return 0;
}