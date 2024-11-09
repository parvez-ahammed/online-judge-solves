#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const int MOD = 998244353;

// Function to calculate modular exponentiation
long long mod_pow(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}
void solve() { 
    int N;
    cin >> N;
    
    vector<long long> R(N), G(N);
    long long total_sum = 0;
    
    // Input weights and calculate the sum S
    for (int i = 0; i < N; ++i) {
        cin >> R[i] >> G[i];
        total_sum += (R[i] + G[i]);
        total_sum %= MOD;
    }
    
    // Calculate Q = 2 * N and its modular inverse
    long long Q = 2 * N;
    long long Q_inv = mod_pow(Q, MOD - 2, MOD);
    
    // Calculate expected values for each K from 1 to N
    for (int K = 1; K <= N; ++K) {
        long long P = K * total_sum % MOD;
        long long result = P * Q_inv % MOD;
        cout << result << endl;
    }
    
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