#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void printMatrix(auto a)
{
    for (auto x : a) {
        for (auto y : x) {
            cout << y << " ";
        }
        cout << endl;
    }
}
void solve()
{

    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> b(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> b[i][j];
        }
    }


    

    for (int i = 0; i < n; i++) {
        sort(a[i].begin(), a[i].end());
    }

    


    for (int i = 0; i < n; i++) {
        sort(b[i].begin(), b[i].end());
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] != b[i][j]) {
                cout << "NO" << endl;
                return;
            }
        }
    }

    cout << "YES" << endl;
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
/*
3 3
1 5 9
6 4 2
3 8 7

6 4 2    2 4 6
1 5 9 -->9 5 1
3 8 7    7 8 3

9 5 1
2 4 6
7 8 3

*/