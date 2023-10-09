#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

vector<int> v;
int N;

bool ok(double mid)
{

    int l = 0, r = N - 1;

    double dis = 0;

    // left side theke jotodur jawa jay jabo age

    double prev_dis = v[0];

    for (int i = 1; i < N - 2; i++) {
        // element ta nile dis

        double curr_dis = v[i] + v[0];

        
    }

    return dis <= mid;
}

double bs()
{
    double l = 0, r = 1e9;

    int iter = 0;

    double ans = 0;

    while (iter < 100) {
        double mid = (l + r) / 2;

        if (ok(mid)) {
            ans = mid;
            r = mid;
        } else {
            l = mid;
        }

        iter++;
    }

    return ans;
}

void solve()
{

    cin >> N;

    v.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    cout << bs();
}
int32_t main()
{
    // for test
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int tc;
    cin >> tc;

    for (int i = 1; i <= tc; i++) {
        cout << "Case #" << i << ": ";
        solve();
        cout << endl;
    }
    return 0;
}