#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

ll n;

bool possible(ll curr)
{

    if (curr > 1e12)
        return false;
    else if (curr == n)
        return true;
    else
        return possible(curr * 10) || possible(curr * 20);
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        cin >> n;

        possible(1) ? cout << "YES" : cout << "NO";
        cout << endl;
    }

    return 0;
}