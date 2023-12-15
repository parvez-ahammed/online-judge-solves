#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int N = 5e6 + 9;

vector<int> spf(N);
vector<unsigned ll> prefSum(N, 0);

void sieve()
{
    for (int i = 2; i < N; i++) {
        spf[i] = i;
    }
    for (int i = 2; i < N; i++) {
        if (spf[i] == i) {
            for (int j = i; j < N; j += i) {
                spf[j] = min(spf[j], i);
            }
        }
    }
}

int getPhi(int x)
{
    int phi = 1;
    while (x > 1) {
        int p = spf[x], e = 0, pw = 1;
        while (x % p == 0) {
            e++;
            pw *= p;
            x /= p;
        }

        phi *= (pw / p) * (p - 1);
    }
    return phi;
}

void init()
{
    sieve();
    for (int i = 1; i < N; i++) {
        int phi_of_i = getPhi(i);
        prefSum[i] = prefSum[i - 1] + 1LL * phi_of_i * phi_of_i;
    }
}
void solve()
{

    int a, b;
    cin >> a >> b;

    cout << prefSum[b] - prefSum[a - 1] << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    init();
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        cout << "Case " << i << ": ";
        solve();
    }
    return 0;
}