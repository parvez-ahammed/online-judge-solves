#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

#define vi vector<int>

#define rep(start, x) for (int i = start; i < x; i++)

void solve()
{

    int n, k;
    cin >> n >> k;

    map<int, vector<int>> mp;
    int moves;
    rep(0, n)
    {   
        int x;

        cin >> x;

        moves = (x) % k;

        if (!moves)
            moves = k;

        if (mp.find(moves) == mp.end())
            mp[moves] = vi();

        auto &pq = mp[moves];

        pq.push_back(i + 1);
    }

    for (auto it = mp.rbegin(); it != mp.rend(); ++it)
    {

        vi &values = it->second;

        for (int value : values)
            cout << value << " ";
    }

    cout << endl;
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