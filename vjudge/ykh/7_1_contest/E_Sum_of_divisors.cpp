#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int mx = 1e6 + 5;

vector<int> sumOfDivisors(mx), divisorCount(mx);
vector<int> kNumber(mx);

void solve()
{

    int a, b;

    cin >> a >> b;
    cout << kNumber[b] - kNumber[a - 1] << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 1; i < mx; i++) {
        for (int j = i; j <= mx; j += i) {
            sumOfDivisors[j] += i;
            divisorCount[j]++;
        }
    }

    for (int i = 0; i < mx; i++) {

        int val = sumOfDivisors[i];

        if (val < 1e6) {

            if (divisorCount[val] == 2) {
                kNumber[i] = 1;
            }
        }
    }

    for (int i = 1; i < mx; i++) {
        kNumber[i] += kNumber[i - 1];
    }

    int tc;
    cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}