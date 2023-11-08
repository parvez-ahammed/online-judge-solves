#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

bool query(int x)
{
    cout << x << endl;
    string s;
    cin >> s;

    return (s == "yes");
}

bool isPrime(int x)
{

    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }

    return true;
}
void solve()
{

    if (query(4) or query(9) or (query(25) or query(49))) {
        cout << "composite" << endl;
        return;
    }

    int divisorCount = 0;

    for (int i = 2; i <= 50; i++) {
        if (isPrime(i)) {
            divisorCount += query(i);
        }
        
        if (divisorCount > 1) {
            cout << "composite" << endl;
            return;
        }
    }

    cout << "prime" << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);

    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}