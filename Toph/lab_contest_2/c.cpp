#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;

    int sum_n = n * (n + 1) / 2;

    int m;
    cin >> m;
    int sum_d = 0;
    while (m--)
    {
        int temp;
        cin >> temp;
        sum_d += temp;
    }

    cout << sum_n - sum_d << "\n";
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}