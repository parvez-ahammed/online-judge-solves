#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

int32_t main()
{

    FAST;

    int n, q;
    cin >> n >> q;
    vector<int> v(n + 1), pref(n + 1);

    for (int i = 1; i <= n; i++)
    {

        cin >> v[i];

        pref[i] = v[i] ^ pref[i - 1];
    }

    while (q--)
    {

        int a, b;
        cin >> a >> b;

        cout << (pref[a - 1] ^ pref[b]) << endl;
    }
    return 0;
}