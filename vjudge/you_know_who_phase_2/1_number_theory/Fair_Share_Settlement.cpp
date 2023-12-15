#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    double n, k;
    cin >> n >> k;
    k++;

    double perPerson = n / k;
    perPerson = floor(perPerson);

    cout << n - (perPerson * (k-1)) << endl;
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