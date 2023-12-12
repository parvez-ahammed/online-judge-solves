#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int N = 1e6 + 5;
vector<bool> is_prime(N, true);
int primeDivisorCnt[N];
void sieve()
{
    is_prime[1] = false;

    for (int i = 2; i < N; i++) {
        if (is_prime[i]) {
            for (int j = i; j < N; j += i) {
                is_prime[j] = false;
                primeDivisorCnt[j]++;
            }
        }
    }
}

void solve()
{

    int num;
    while (cin >> num) {
        if (num == 0)
            break;

        cout << num << " : " << primeDivisorCnt[num] << endl;
    }
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}