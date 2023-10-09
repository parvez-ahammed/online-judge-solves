#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    int n;
    cin >> n;

    int first = 1, second = 2, third = n - 3;

    if (third == first || third == second or n < 7) {
        cout << "NO" << endl;
        return;
    }

    n--;

    second = 2;
    third = -1;

    int mx = 1e6 + 5;

    for (int i = second; i < min(mx, n); i++) {

        second = i;
        third = n - second;

        if (second == third or second % 3 == 0 or third % 3 == 0)
            continue;
        else
            break;
    }

    if (first == third or second == first || second == third or second % 3 == 0 or third % 3 == 0) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    cout << first << " " << second << " " << third << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--) {
        solve();
    }
    return 0;
}