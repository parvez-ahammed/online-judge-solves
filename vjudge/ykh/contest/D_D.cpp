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

    int tc;
    cin >> tc;

    while (tc--)
    {
        int a;

        cin >> a;

        cout << (sqrt(a / 6)) << endl;
    }
    return 0;
}