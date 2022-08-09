#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h, m;
    cin >> h >> m;

    cout  << fixed << setprecision(7)<<   min ( 360 - ((((h * 60) + m) * .5) - (m * 6)) ,  360- (360 - ((((h * 60) + m) * .5) - (m * 6)))) << endl;
}