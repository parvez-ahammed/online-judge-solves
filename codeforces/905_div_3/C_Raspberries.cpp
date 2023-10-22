#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int MOD = 1e9 + 7;

map<int, int> mp, freq;
vector<int> v;
int n, k;

void whenKis5()
{

    int mn = INT_MAX;
    for (int i = 10; i >= 1; i--)
    {
        if (freq[i] >= 1)
        {
            if (5 - i >= 0)
                mn = min(mn, 5 - i);
            if (10 - i >= 0)
                mn = min(mn, 10 - i);
        }
    }
    cout << mn << endl;
}

void whenKis2()
{

    int mn = INT_MAX;
    for (int i = 10; i >= 1; i--)
    {
        if (freq[i] >= 1)
        {
            if (10 - i >= 0)
                mn = min(mn, 10 - i);
            if (8 - i >= 0)
                mn = min(mn, 8 - i);
            if (6 - i >= 0)
                mn = min(mn, 6 - i);
            if (4 - i >= 0)
                mn = min(mn, 4 - i);
            if (2 - i >= 0)
                mn = min(mn, 2 - i);
        }
    }
    cout << mn << endl;
}

void whenKis3()
{

    int mn = INT_MAX;
    for (int i = 10; i >= 1; i--)
    {
        if (freq[i] >= 1)
        {
            if (9 - i >= 0)
                mn = min(mn, 9 - i);
            if (6 - i >= 0)
                mn = min(mn, 6 - i);
            if (3 - i >= 0)
                mn = min(mn, 3 - i);
        }
    }

    if (mn == INT_MAX)
    {
        cout << 2 << endl;
        return;
    }
    cout << mn << endl;
}

bool check()
{
    return (freq[1] >= 1 or freq[3] >= 1 or freq[5] >= 1 or freq[7] >= 1 or freq[9] >= 1);
}

void whenKis4()
{

    // cout << "when k is 4"
    //      << " ";

    int mn = INT_MAX;

    if (freq[2] >= 2 or freq[6] >= 2 or freq[10] >= 2 or freq[4] >= 1 or freq[8] >= 1)
    {
        mn = min(mn, 0);
    }

    if (freq[2] >= 1)
    {
        if (freq[6] >= 1 or freq[10] >= 1)
        {
            mn = min(mn, 0);
        }

        if (check())
            mn = min(mn, 1);
    }

    if (freq[6] >= 1)
    {
        if (freq[2] >= 1 or freq[10] >= 1)
        {
            mn = min(mn, 0);
        }
        if (check())
            mn = min(mn, 1);
    }

    if (freq[10] >= 1)
    {
        if (freq[6] >= 1 or freq[2] >= 1)
        {
            mn = min(mn, 0);
        }
        if (check())
            mn = min(mn, 1);
    }

    if (freq[3] >= 1 or freq[7] >= 1)
        mn = min(mn, 1);

    if (freq[1] >= 1)
    {
        if (freq[9] >= 1)
        {
            mn = min(mn, 2);
        }
        if (freq[5] >= 1)
            mn = min(mn, 2);
    }

    if (freq[9] >= 1)
    {
        if (freq[1] >= 1)
        {
            mn = min(mn, 2);
        }
        if (freq[5] >= 1)
            mn = min(mn, 2);
    }

    if (freq[5] >= 1)
    {
        if (freq[1] >= 1)
        {
            mn = min(mn, 2);
        }
        if (freq[9] >= 1)
            mn = min(mn, 2);
    }

    if (freq[1] >= 2 or freq[3] >= 2 or freq[5] >= 2 or freq[7] >= 2 or freq[9] >= 2)
    {
        mn = min(mn, 2);
    }

    cout << mn << endl;
}
void solve()
{

    cin >> n >> k;

    v.resize(n + 1);
    mp.clear();
    freq.clear();

    ll mul = 1;

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];

        freq[v[i]]++;

        mul = (mul * v[i]) % MOD;

        // cout << v[i] % k << " ";

        // do prime factorization of v[i]
    }

    sort(v.begin(), v.end());

    if (k == 5)
    {
        whenKis5();
        return;
    }
    if (k == 2)
    {
        whenKis2();
        return;
    }
    if (k == 3)
    {
        whenKis3();
        return;
    }
    if (k == 4)
    {
        whenKis4();
        return;
    }

    cout << "OTHER CASE" << endl;
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