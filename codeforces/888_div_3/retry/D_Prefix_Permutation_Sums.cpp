#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;

    vector<ll> v(n + 1);

    set<ll> s;

    for (int i = 0; i <= n; i++)
    {
        s.insert(i);
    }

    ll missing = -1;

    ll setSum = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        cin >> v[i];

        ll original_value = v[i] - v[i - 1];

        if (s.count(original_value))
        {
            setSum += original_value;
            s.erase(original_value);
        }

        else

            missing = original_value;
    }

    ll sum = (n * (n + 1)) / 2;

    ll check = sum - v[n - 1];

    if (s.count(check))
        s.erase(check);
    else
        missing = check;

    ll elemSum = 0;
    for (auto elem : s)
        elemSum += elem;

    bool possible = ((s.size() == 2 && elemSum == missing) || (s.size() == 1 && elemSum == 0));

    possible ? cout << "YES" << endl : cout << "NO" << endl;
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}