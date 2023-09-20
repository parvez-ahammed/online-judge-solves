#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
vector<int> ans;
int n, k;

bool ok(int x)
{

    ll moveNeeded = 0;

    int sz = ans.size();

    for (int i = 0; i < sz; i++) {
        if (ans[i] <= x) {
            moveNeeded += x - ans[i];
        } else
            break;
    }
    return moveNeeded <= (k * 1ll);
}
int binSearch()
{

    int l = 0, r = 3e9, mid;

    int median = 0;

    while (l <= r) {
        mid = l + (r - l) / 2;

        if (ok(mid)) {
            median = mid;
            l = mid + 1;
        } else
            r = mid - 1;
    }

    return median;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    if (n == 1) {
        cout << v[0] + k << endl;
        return 0;
    }

    for (int i = n / 2; i < n; i++) {
        ans.push_back(v[i]);
    }



    cout << binSearch() << endl;
    return 0;
}