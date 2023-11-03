#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const int N = 1e6 + 2, mod = 1e9 + 7;
int fact[N], ifact[N];

void prec()
{ // O(n)
    fact[0] = 1;
    for (int i = 1; i < N; i++) {
        fact[i] = 1LL * fact[i - 1] * i % 10000;
    }
}

void print(int n)
{
    int ans = (n % 10000);

    string s = to_string(ans);

    int len = s.length();

    while (len < 4) {
        cout << 0;
        len++;
    }
    cout << ans << endl;
}
void solve()
{

    ll n;
    cin >> n;

    if (n >= 40)
        print(0);
    else
        print(fact[n]);
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    prec();

 


    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}