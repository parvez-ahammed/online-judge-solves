#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int N = 300005;
const int MOD = 998244353;
int n;
int a[N];

int add(int a, int b)
{
    return (a + b) % MOD;
}

int sum(int a, int b)
{
    a += b;
    a %= MOD;
    while (a < 0)
        a += MOD;
    return a;
}

int mul(int a, int b)
{
    return (a * 1LL * b) % MOD;
}
void solve()
{

    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int res = 0;
    for (int b = 0; b < 30; ++b) {
        int cur = 0;
        int cnt[2] = { 0, 0 }, sumOfL[2] = { 0, 0 };
        cnt[0] = 1;
        int x = 0;

        for (int i = 0; i < n; i++) {

            x ^= ((a[i] >> b) & 1);

            int sumOfR = mul(cnt[x ^ 1], i + 1);

            int tot = sum(sumOfR, -sumOfL[x ^ 1]);

            cur = add(cur, tot);

            cnt[x]++;

            sumOfL[x] = add(sumOfL[x], i + 1);
        }

        int contribution = mul(1 << b, cur);

        res = add(res, contribution);
    }

    cout << res << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    //   cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}