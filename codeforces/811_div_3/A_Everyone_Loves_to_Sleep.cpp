#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

void solve()
{

    int n, h, m;
    cin >> n >> h >> m;

    int s_h = 0, s_m = 0, ans = INT_MAX;
    for (int i = 0; i < n; i++)

    {
        int hour, min, curr_h, curr_m;

        cin >> hour >> min;

        if (hour == h)
        {
            curr_h = 0, curr_m = 0;
            if (min >= m)
                curr_m = min - m;
            else if (m > min)
                curr_h = 23, curr_m = 60 - (m - min);
        }

        else
        {
            if (hour > h)
                curr_h = hour - h;
            else
                curr_h = 24 + hour - h;

            if (min >= m)
                curr_m = min - m;
            else
            {
                --curr_h;
                curr_m = 60 + min - m;
            }
        }

        int curr_sleep = (curr_h * 60) + curr_m;
        if (curr_sleep < ans)
        {
            ans = curr_sleep;
            s_h = curr_h;
            s_m = curr_m;
        }
    }

    cout << s_h << " " << s_m << endl;
}
int32_t main()
{

    FAST

        int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}