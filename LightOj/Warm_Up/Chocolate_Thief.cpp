#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
#define Reverse(x) reverse(x.begin(), x.end())
void solve()
{

    int n;

    cin >> n;

    vector<string> names(n);
    vector<ll> volume(n);

    int sumV = 0;

    rep(0, n)
    {
        string str;
        cin >> str;
        ll len, height, width;
        cin >> len >> height >> width;

        names[i] = str;
        volume[i] = len * height * width;

        sumV += volume[i];
    }

    ll avgV = sumV / n;
    string victim = "", thief = "";

    rep(0, n)
    {
        if (volume[i] < avgV)
            victim = names[i];

        if (volume[i] > avgV)
            thief = names[i];
    }

    victim == "" && thief == "" ? cout << "no thief" : cout << thief << " took chocolate from " << victim;

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