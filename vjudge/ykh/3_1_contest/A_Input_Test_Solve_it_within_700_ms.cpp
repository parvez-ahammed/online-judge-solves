#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    int count = 0, x;

    rep(0, n)
    {
        cin >> x;
        count += x%k == 0 ;
    }
    cout << count << endl;
    return 0;
}