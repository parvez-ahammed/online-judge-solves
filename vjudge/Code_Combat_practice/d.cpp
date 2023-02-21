#include <bits/stdc++.h>
using namespace std;


void solve(int n)
{
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }
    int second;

    cout << "Discarded cards:";

    while (q.size() > 1)
    {
        cout << " " << q.front();
        q.pop();
        second = q.front();
        q.pop();
        if (!q.empty())
            cout << ",";
        q.push(second);
    }
    cout << "\nRemaining card: " << q.front() << endl;
    q.pop();
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;
        else
            solve(n);
    }
    return 0;
}