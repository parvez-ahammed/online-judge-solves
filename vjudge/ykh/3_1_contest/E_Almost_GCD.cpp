#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, ans = INT_MIN, indice = 0;
    ;
    cin >> n;
    vector<int> v(n);
    rep(0, n) cin >> v[i];
    sort(v.begin(), v.end());

    for (int i = 2; i <= 1000; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
           cnt+= v[j] % i == 0 ;

        if (cnt >= ans)
        {
            indice = i;
            ans = cnt;
        }
    }

    cout << indice << endl;
    return 0;
}