#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

bool processRow(int row, vector<string> &v)
{
    int tb = 0 , tw = 0 , black = 0, white = 0;

    for (int i = 0; i < v[row].size(); i++)
    {
        v[row][i] == 'B' ? (tb ++ , black++  , white = 0 ): (tw ++  ,white++   , black =  0);
        if (black >= 3 || white >= 3)
            return false;
    }
    return tw == tb;
}



int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string str = "";
    rep(0, n) str += "#";
    vector<string> v(n), transpose(n, str);

    
    rep(0, n) cin >> v[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            transpose[j][i] = v[i][j];
    }

    bool possible = true;
    rep(0, n)
    {
        possible = processRow(i, v);
        if (!possible)
            break;
        possible = processRow(i, transpose);
        if (!possible)
            break;
    }

    if (!possible)
        cout << 0 << endl;
    else
        cout << 1 << endl;

    return 0;
}