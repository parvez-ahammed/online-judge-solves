#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a1, a2, a3;

    while (cin >> a1 >> a2 >> a3 )
    {

        if (a1 == 0 and a2 == 0 and a3 == 0)
            break;
        if (a2 - a1 == a3 - a2)
            cout << "AP " << a3 + (a2 - a1) << endl;
        else
            cout << "GP " << a3 * (a2 / a1) << endl;
    }
    return 0;
}