#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    int n ;
    cin >> n;
    vector<int> v(n);

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    sort(v.begin(), v.end());

    cout << sum - v[0] << endl;


}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    int tc;
    cin >> tc;
    while (tc--)
    {
       solve();
    }
    return 0;
}