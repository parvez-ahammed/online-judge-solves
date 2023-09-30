#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int mx = 1e6 + 7;

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

    for (int i = 1; i <= 1e6; i++) {
        for (int j = i; j <= 1e6; j += i) {
            sumOfDivisors[j] += i;
            divisorCount[j]++;
        }
    }

    for (int i = 0; i <= 1e6; i++) {

        int val = sumOfDivisors[i];

        if (val < 1e6) {

            if (divisorCount[val] == 2) {
                kNumber[i] = 1;
            }
        }
    }

    for (int i = 1; i < 1e6 + 2; i++) {
        kNumber[i] += kNumber[i - 1];
    }

    int tc;
    cin >> tc;

    while (tc--) {
        solve();
    }

     cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}