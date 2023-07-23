#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a;

    for (int i = 0; i < 32; i++)
    {
        if ((a >> i) & 1)
            cout << i << " ";
    }

    return 0;
}
