#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

#define ToggleBit(x, k) (x ^= (1LL << k))

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n;

    queue<int> d1, d2;
    map<pair<int, int>, int> mp;
    int x;
    int state1 = 0, state2 = 0;

    cin >> k;
    rep(0, k) cin >> x, d1.push(x), ToggleBit(state1, x);

    cin >> k;
    rep(0, k) cin >> x, d2.push(x), ToggleBit(state2, x);

    mp[{state1, state2}]++;

    int moves = 0;
    bool possible = true;

    while (true)
    {
        moves++;

        int card1 = d1.front();
        d1.pop();
        ToggleBit(state1, card1);

        int card2 = d2.front();
        d2.pop();
        ToggleBit(state2, card2);

        if (card1 > card2)
        {
            d1.push(card2);
            d1.push(card1);
            ToggleBit(state1, card1);
            ToggleBit(state1, card2);
        }
        else
        {
            d2.push(card1);
            d2.push(card2);
            ToggleBit(state2, card1);
            ToggleBit(state2, card2);
        }

        if (d1.empty() || d2.empty())
            break;

        if (moves > 2000)
        {
            possible = false;
            break;
        }

        mp[{state1, state2}]++;
    }

    if (!possible)
        cout << -1 << endl;
    else
    {
        cout << moves << " ";
        if (d1.empty())
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}
