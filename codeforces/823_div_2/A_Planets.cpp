#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define llu unsigned long long int
#define Sort(x) sort(x.begin(), x.end())
#define SortR(x) sort(x.begin(), x.end(), greater<int>())
#define Reverse(x) reverse(x.begin(), x.end())
#define sq(x) (x) * (x)
#define mid(l, r) (l + (r - l) / 2)
int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};

void solve()
{
    // cout << "Test case startted \n\n"
    //      << endl;
    ll n, c;
    cin >> n >> c;
    ll temp = 0;

    vector<ll> v(120, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v[temp] += 1;
    }
    // int using_second_machine_cost = 0;
    // int total_orbit = 0;

    int total_cost = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > 0)
        {
            // cout << "On " << i << "orbit planet is " << v[i] << endl;
            // total_orbit += 1;
            total_cost += min(c, v[i]);
        }
    }

    // cout << "TOtal orbit cost " << total_orbit * c << endl;
    // cout << "Single machine cost " << n << endl;

    cout << total_cost << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}