#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int n, k;
bool ok(vector<double>& v, double len)
{
    int cnt = 0;
    for (int i = 0; i < v.size(); i++) {
        cnt += floor(v[i] / len);
    }
    return (cnt >= k);
}

double binSearch(vector<double>& v)
{

    sort(v.begin(), v.end());

    double l = 0, r = 1e7 + 9;

    double ans = 0;

    int iterations = 45;

    while (iterations--) {

        double mid = (l + r) / 2;

        if (ok(v, mid)) {
            ans = mid;
            l = mid;
        } else {
            r = mid;
        }
    }

    return ans;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;
    vector<double> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int ans = 0;

    double len = binSearch(v);

    cout << fixed << setprecision(10) << len << endl;

    return 0;
}