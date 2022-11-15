#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll int
#define endl "\n"

void solve()
{

    ll a, b;
    ll final_cost = 0;

    cin >> a >> b;

    if (a == b)
    {
        cout << final_cost << endl;
        return;
    }

    queue<pair<ll, ll>> s;
    set<ll> unique;
    s.push(make_pair(0, a));
    ll highest_possible = 2 * b;

    while (!s.empty())
    {
        ll current_cost = s.front().first;
        ll current_a = s.front().second;
        s.pop();
        unique.insert(current_a);
        if (current_a == b)
        {
            final_cost = current_cost;
            break;
        }

        if (current_a - 1 >= 0 && !unique.count(current_a - 1))
            s.push(make_pair(current_cost + 1, current_a - 1));

        if (current_a + 3 <= highest_possible && !unique.count(current_a + 3))
            s.push(make_pair(current_cost + 1, current_a + 3));

        if (current_a * 2 <= highest_possible && !unique.count(current_a * 3))
            s.push(make_pair(current_cost + 1, current_a * 2));
    }

    cout << final_cost << endl;
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