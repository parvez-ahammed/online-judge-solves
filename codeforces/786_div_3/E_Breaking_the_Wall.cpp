#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

int check(vector<int> &v)
{

    int ans = INT_MAX;

    int n = v.size();

    for (int i = 0; i < n; i++)
    {

        int calc = INT_MAX;
        int self = (v[i] + 1) / 2;
        int right = 0;
        int left = 0;
        
        if (i == 0)
        {

            if (self < v[i + 1])
                right = (v[i + 1] - self + 1) / 2;
        }
        else if (i == n - 1)
        {
            if (self < v[i - 1])
                left = (v[i - 1] - self + 1) / 2;
        }

        else
        {
            if (self < v[i + 1])
                right = (v[i + 1] - self + 1) / 2;

            if (self < v[i - 1])
                left = (v[i - 1] - self + 1) / 2;
        }

        calc = self + right + left;

        ans = min(calc, ans);
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    

   
    cout << check(v ) << endl;
}
int32_t main()
{

    FAST;
    int tc = 1;
    //cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}