#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

vector<int> v(1000005);

int F(int n)
{
    ll ans = 1;

    while (n) {
        if (n % 10) {
            ans *= (n % 10);
        }

        n /= 10;
    }

    return ans;
}

int G(int n)
{
    if (n < 10) {
        return n;
    }

    return G(F(n));
}
void init()
{

    for (int i = 1; i <= 810; i++) {
        v[i] = G(i);

        
        cout << v[i] << " ";
        if (i % 10 == 0) {
            cout << endl;
        }

        if (i % 100 == 0) {
            cout << endl;
        }
        

        
    }
}

void solve()
{

    int l, r, k;

    cin >> l >> r >> k;

    int cnt = 0;
    for (int i = l; i <= r; i++) {

        if (v[i] == k) {
            cnt++;
        }
    }

    cout << cnt << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    init();
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}