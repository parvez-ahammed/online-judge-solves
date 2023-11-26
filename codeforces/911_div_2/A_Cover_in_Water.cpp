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

    for (int i = 0; i < n;) {

        int j = i;
        int sz = 0;
        if (str[i] == '.') {
            while (j < n && str[j] == '.') {
                sz++;
                j++;
            }
        }

        if (sz > 0) {

            if (sz >= 3) {
                cout << 2 << endl;
                return;
            }
            cnt += sz;
        }
        else {
            j++;
        }

        i = j;
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

// #...#..#.#