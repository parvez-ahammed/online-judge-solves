#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    while (cin >> a >> b) {
        if (a == 0 and b == 0)
            break;
        if (a + b == 13)
            cout << "Never speak again.";
        else if (a > b)
            cout << "To the convention.";
        else if (a < b)
            cout << "Left beehind.";
        else
            cout << "Undecided.";

        cout << endl;
    }
    return 0;
}