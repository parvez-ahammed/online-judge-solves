#include <bits/stdc++.h>
using namespace std;
int main()
{

    int tc = 1;
    cin >> tc;
    while (tc--)
    {

        long long xa, ya, xb, yb, xc, yc, cell = 1, dump = 0;
        cin >> xa >> ya >> xb >> yb >> xc >> yc;
        ((xc < xa && xb < xa) || ((xc > xa && xb > xa))) ? cell += min(abs(xc - xa), abs(xb - xa)) : dump = 1;
        ((yc < ya && yb < ya) || ((yc > ya && yb > ya))) ? cell += min(abs(yc - ya), abs(yb - ya)) : dump = 1;
        cout << cell << endl;
    }
    return 0;
}