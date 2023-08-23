#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

void solve()
{

    int n;
    string type;

    cin >> n >> type;

    string command;
    int val;
    deque<int> dq;

    while (n--)
    {
        cin >> command;

        if (command == "IN")
        {
            cin >> val;
            dq.push_back(val);
        }
        else if (dq.empty())
            cout << "None" << endl;
        else if (type == "FIFO")
        {
            cout << dq.front() << endl;
            dq.pop_front();
        }
        else
        {
            cout << dq.back() << endl;
            dq.pop_back();
        }
    }
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        solve();
    }

    return 0;
}