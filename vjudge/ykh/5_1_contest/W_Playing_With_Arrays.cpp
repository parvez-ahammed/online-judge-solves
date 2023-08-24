#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

void solve()
{
    int n;
    cin >> n;

    int till = (n + 1) / 2;

    deque<int> dq;

    for (int i = 1; i <= till; i++)
        dq.push_back(i);

    for (int i = till + 1; i <= n; i++)
        dq.push_back(i);

    int turn = 1;

    while (!dq.empty())
    {
        if (turn)
        {
            cout << dq.front();
            dq.pop_front();
        }
        else
        {
            cout << dq.back();
            dq.pop_back();
        }

        if (!dq.empty())
            cout << " ";

        turn ^= 1;
    }
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