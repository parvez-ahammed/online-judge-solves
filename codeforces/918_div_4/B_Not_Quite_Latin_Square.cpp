#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

bool isValid(int i, int j)
{
    if (i >= 0 && i < 3 && j >= 0 && j < 3)
        return true;
    return false;
}

void solve()
{

    vector<string> v(3);
    for (int i = 0; i < 3; i++)
        cin >> v[i];

    int a = 0, b = 0, c = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            a += (v[i][j] == 'A');
            b += (v[i][j] == 'B');
            c += (v[i][j] == 'C');
        }
    }

    if (a == 2)
        cout << "A" << endl;
    else if (b == 2)
        cout << "B" << endl;
    else
        cout << "C" << endl;
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