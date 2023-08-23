#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

ll masha = 0, bear = 0;

void solve()
{
    int n;
    cin >> n;

    masha = 0, bear = 0;
    int x = 0;

    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        cin >> x;

        dq.push_back(x);
    }

    int mashaTurn = 1;

    while (!dq.empty())
    {

        if (mashaTurn == 1)
        {

            masha += dq.front();
            dq.pop_front();
            if (!dq.empty())
            {
                masha += dq.front();
                dq.pop_front();
            }
        }
        else
        {
            bear += dq.back();
            dq.pop_back();

            if (!dq.empty())
            {
                bear += dq.back();
                dq.pop_back();
            }
        }

        mashaTurn ^= 1;
    }

    masha == bear ? (cout << "Draw") : (masha > bear ? cout << "Masha" : cout << "The Bear");

    cout << endl;
}
int32_t main()
{

    FAST;
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}