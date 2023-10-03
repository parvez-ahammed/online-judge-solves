#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

string f(string x, string y)
{

    for (int i = 0; i < x.size(); i += 2) {

        if (x[i] != y[i]) {

            return "-1";
        }
    }

    string z = "";

    for (int i = 0; i < x.size(); i++) {

        z += 'a';
    }

    for (int i = 1; i < x.size(); i += 2) {

        z[i] = y[i];
    }

    return z;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string x, y;
    cin >> x >> y;

    cout << f(x, y) << endl;
    return 0;
}