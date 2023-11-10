#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int N = 500005;

vector<int> divisorsSum(N);
void init()
{

    for (int i = 1; i < N; ++i) {
        for (int j = i; j < N; j += i) {
            divisorsSum[j] += i;
            ;
        }
    }

}

void solve()
{

    int n;
    cin >> n;

    cout << (divisorsSum[n] - n) << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    init();
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}