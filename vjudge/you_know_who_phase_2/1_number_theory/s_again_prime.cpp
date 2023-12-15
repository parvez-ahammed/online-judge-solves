#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void getPrimeFacOfN(int n, map<int, int>& primeFacOfN)
{

    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            primeFacOfN[i]++;
            n /= i;
        }
    }

    if (n > 1) {
        primeFacOfN[n]++;
    }
}
void getPrimeMapTillN(int n, map<int, int>& primeFacOfN)
{
    for (int i = 2; i <= n; i++) {
        getPrimeFacOfN(i, primeFacOfN);
    }
}
int solve()
{

    int n, m;
    cin >> m >> n;

    // there are scope for optimization 

    int IMPOSSIBLE = -1;

    map<int, int> primeFacOfN, primeFacOfM;

    getPrimeMapTillN(n, primeFacOfN);
    getPrimeFacOfN(m, primeFacOfM);
    vector<int> ans;

    for (auto [prime, freq] : primeFacOfM) {
        if (primeFacOfN.count(prime) == 0) {
            return IMPOSSIBLE;
        }
        int need = primeFacOfN[prime] / freq;

        if (need == 0) {
            return IMPOSSIBLE;
        }
        ans.push_back(need);
    }

    int ANS = *min_element(ans.begin(), ans.end());

    return ANS;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        cout << "Case " << t << ":" << endl;
        int ans = solve();
        if (ans == -1) {
            cout << "Impossible to divide" << endl;
        } else {
            cout << ans << endl;
        }
    }
    return 0;
}