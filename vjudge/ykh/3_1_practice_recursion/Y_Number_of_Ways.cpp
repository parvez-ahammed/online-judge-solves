#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
int s, e;

int possibleWays(int curr)
{

    if (curr == e)
        return 1;
        
    if (curr > e)
        return 0;
    return possibleWays(curr + 1) + possibleWays(curr + 2) + possibleWays(curr + 3);
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> s >> e;

    cout << possibleWays(s) << endl;
    return 0;
}