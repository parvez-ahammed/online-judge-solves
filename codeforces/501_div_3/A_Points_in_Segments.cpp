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

    vector<int> v(m + 1, 0);

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;

        
        for (int j = l; j <= r; j++) {

            if (v[j] == 1) {
                continue;
            }


            v[j] = 1;
            cnt += 1;
        }
    }

    cout << m - cnt << endl;

    for (int i = 1; i <= m; i++) {

        if (v[i] == 0) {
              cout << i << " ";
        }
      
    }
    return 0;
}