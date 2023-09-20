#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n + 1), prefix(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + v[i];
    }

    int m;
    cin >> m;

    while (m--) {
        int worm;
        cin >> worm;

        cout << lower_bound(prefix.begin(), prefix.end(), worm) - prefix.begin() << endl;
    }
    return 0;
}