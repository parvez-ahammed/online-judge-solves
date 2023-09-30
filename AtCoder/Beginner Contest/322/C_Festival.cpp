#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> v(m + 1);

    for (int i = 1; i <= m; i++) {
        cin >> v[i];
    }
    int curr = 1;
    for (int i = 1; i <= n; i++) {

        while (i > v[curr]) {
            curr++;
        }

        cout << v[curr] - i << endl;
    }
    return 0;
}