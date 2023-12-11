#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void printVector(vector<int> a)
{
    for (int i = 1; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
void solve()
{

    // is it a directional graph?
    // where each node has only one parent
    // and the result will come from processing the leafs at first

    int n;

    cin >> n;

    vector<ll> a(n + 1), p(n + 1);

    vector<ll> currArr(n + 1, 0);

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    currArr = a;

    ll sum = 0;

    for (int i = 2; i <= n; ++i) {
        cin >> p[i];

        currArr[p[i]] += a[i];
        // printVector(currArr);
    }

    int sz = 999;

    vector<vector<char>> changes(sz, vector<char>(n + 1, '0'));

    bool broken = false;

    for (int k = 1; k < sz; k++) {
        for (int i = 1; i <= n; i++) {
            if (a[i] == currArr[i]) {
                changes[k][i] = '0';
            } else if (a[i] > currArr[i]) {
                changes[k][i] = '-';
            } else {
                changes[k][i] = '+';
            }
        }

        a = currArr;

        for (int i = 2; i <= n; ++i) {
            currArr[p[i]] += a[i];
        }

        if (k >= 3) {
            if (changes[k][1] == changes[k - 1][1] and changes[k][1] == changes[k - 2][1]) {
                broken = true;
                break;
            }
        }
    }

    for (int i = 2; i <= n; ++i) {
        if (p[i] == 1) {
            sum += a[i];
        }
    }

    if (sum == 0) {
        if (a[1] == 0)
            cout << '0' << endl;
        else if (a[1] > 0)
            cout << '+' << endl;
        else
            cout << '-' << endl;
    } else {
        if (sum > 0)
            cout << '+' << endl;
        else
            cout << '-' << endl;
    }
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}