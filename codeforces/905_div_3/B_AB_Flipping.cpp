#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;
    string str;
    cin >> str;

    int cnt = 0;

    int cont = 0;

    for (int i = n - 1; i >= 0; i--) {
        if (str[i] == 'B')
            cont++;
        if (str[i] == 'A') {
            cnt += cont;

            if (cont != 0) {
                cont = 0;
                cont++;
            }
        }
    }

    cout << cnt << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}