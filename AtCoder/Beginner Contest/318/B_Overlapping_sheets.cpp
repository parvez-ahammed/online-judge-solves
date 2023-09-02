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

    vector<vector<int>> v(105, vector<int>(105, 0));

    for (int i = 0; i < n; i++)

    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        for (int j = a; j < b; j++) {

            for (int k = c; k < d; k++) {
                v[j][k] = 1;
            }
        }
    }

    int ans = 0;

    for (int j = 0; j <= 102; j++) {
        for (int k = 0; k <= 102; k++)
            ans += v[j][k];
    }

    cout << ans << endl;

    return 0;
}
