#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int MOD = 1e9 + 7;

int power[100006];

void init()
{
    power[0] = 1;

    for (int i = 1; i < 100004; i++) {
        power[i] = (power[i - 1] * 2LL) % MOD;
    }
}
void solve()
{


    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int sum = 0;

    for (int i = 0; i < n; i++) {
        int contributionMax = (1ll * a[i] * power[i]) % MOD;
        int contributionMin = (1ll * a[i] * power[n - i - 1]) % MOD;

        sum += (contributionMax - contributionMin) % MOD;
        sum %= MOD;
    }

    cout << sum << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    init();
    int tc = 1;
    cin >> tc;

    for (int t = 1; t <= tc; t++) {
        cout << "Case #" << t << ": ";
        solve();
    }
    return 0;
}