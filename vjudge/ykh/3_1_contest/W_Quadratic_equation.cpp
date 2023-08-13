#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

int32_t main()
{

    FAST

        double a,
        b, c;
    cin >> a >> b >> c;

    int d = (b * b) - (4 * a * c);
    int x1 = (-b - sqrt(d)) / (2 * a);
    int x2 = (-b + sqrt(d)) / (2 * a);

    if (d < 0)
        cout << "No roots";
    else if (d == 0)
        cout << "One root: " << x1;
    else
        cout << "Two roots: " << min(x1, x2) << " " << max(x1, x2);
    
    cout << endl;
    return 0;
}