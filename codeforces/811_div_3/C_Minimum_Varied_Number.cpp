#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

int ans[50];

int getSum(int val)
{
    string str = "";
    for (int i = 9; i >= 0; i--)
    {
        if (val >= i)
        {
            val -= i;
            str += '0' + i;
        }
    }

    sort(str.begin(), str.end());

    return stoi(str);
}

void calc()
{
    for (int i = 1; i <= 45; i++)
    {
        ans[i] = getSum(i);
    }
}

void solve()
{

    int n;
    cin >> n;
    cout << ans[n] << endl;
}
int32_t main()
{

    calc();
    FAST

        int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}