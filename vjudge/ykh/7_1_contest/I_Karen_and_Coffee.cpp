#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int N = 2e5 + 5;
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, q;
    cin >> n >> k >> q;

    vector<int> diff(N, 0), prefixRecipies(N, 0), admissible(N, 0);

    for (int i = 1; i <= n; i++) {
        int l, r;
        cin >> l >> r;

        diff[l]++;
        diff[r + 1]--;
    }

    for (int i = 1; i <= N; i++) {
        prefixRecipies[i] = prefixRecipies[i - 1] + diff[i];
    }

    for (int i = 1; i <= N; i++) {
        prefixRecipies[i] = (prefixRecipies[i] >= k) ? 1 : 0;
    }

    for (int i = 1; i <= N; i++) {
        admissible[i] = admissible[i - 1] + prefixRecipies[i];
    }

    while (q--) {
        int a, b;
        cin >> a >> b;

        cout << admissible[b] - admissible[a - 1] << endl;
    }
    return 0;
}
