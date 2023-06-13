#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define rep(start, end) for (int i = start; i < end; i++)
void solve()
{

    string a, b;
    cin >> a >> b;
    string converted = "";

    int current = 7;
    int value = 0;

    rep(0, b.size())
    {
        if (b[i] == '.')
        {
            current = 7;

            converted += to_string(value);
            value = 0;
            converted += ".";
        }
        else if (b[i] == '1')
        {

            value += pow(2, current);
            current--;
        }
        else
        {
            current--;
        }
    }
    converted += to_string(value);


    a == converted ? cout << "Yes" : cout << "No";
    cout << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    int i = 1;
    cin >> tc;
    while (tc--)
    {
        cout << "Case " << i++ << ": ";
        solve();
    }
    return 0;
}