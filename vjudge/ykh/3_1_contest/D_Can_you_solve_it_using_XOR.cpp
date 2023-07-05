#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    rep(0, n) cin >> v[i];

    int ans = -1;
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size() - 1; i++)
    {

        if (v[i] != 0)
        {

            if ((v[i] ^ v[i + 1]) == 0)
                i++;
            else
            {
                ans = i;
                break;
            }
        }
    }
    if (ans == -1)
        ans = n - 1;

    cout << v[ans] << endl;
    return 0;
}