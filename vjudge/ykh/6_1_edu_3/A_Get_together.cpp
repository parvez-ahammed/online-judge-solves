#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int N;
vector<pair<int, int>> person;

double ok(double mid)
{

    double left = -1e9 * 1.0;
    double right = 1e9 * 1.0;

    for (int i = 0; i < N; i++) {
        double l = person[i].first - (mid * person[i].second);
        double r = person[i].first + (mid * person[i].second);

        left = max(left, l);
        right = min(right, r);

        if (left > right) {
            return false;
        }
    }

    return true;
}

double binSearch()
{

    int iterations = 100;

    double l = 0, ans = 0, r = 1e9;

    while (iterations--) {
        double mid =(l + r) / 2.0;

        if (ok(mid)) {
            ans = mid;
            r = mid;
        } else {
            l = mid;
        }
    }

    return ans;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;
    person.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> person[i].first >> person[i].second;
    }

    double ans = binSearch();

    cout << fixed << setprecision(10)<< ans << endl;

    return 0;
}