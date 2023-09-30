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
    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    int i = 0, j = 0;
    for (i = 0; i < m; i++) {
        while (j < n && a[j] < b[i]) {
            j++;
        }
        cout << j << " ";
    }

    return 0;
}