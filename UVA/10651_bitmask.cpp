// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1592
// https://www.udebug.com/UVa/10651

#include <bits/stdc++.h>
using namespace std;

#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define ToggleBit(x, k) (x ^= (1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)

#define rep(start, x) for (int i = start; i < x; i++)

int solve(int src)
{
    int result = INT_MAX;

    queue<int> q;
    vector<bool> visited(5000, false);

    q.push(src);
    visited[src] = true;

    while (!q.empty())
    {
        int mask = q.front();
        q.pop();
        
        result = min(result, __builtin_popcount(mask));
        if (result == 1)
            return 1;

        int state;
        rep(0, 10)
        {
            state = mask;
            if ((CheckBit(mask, 11 - i) && CheckBit(mask, 10 - i) && !CheckBit(mask, 9 - i)) || (!CheckBit(mask, 11 - i) && CheckBit(mask, 10 - i) && CheckBit(mask, 9 - i)))
            {
                ToggleBit(state, 11 - i), ToggleBit(state, 10 - i), ToggleBit(state, 9 - i);
                if ( !visited[state])(q.push(state), visited[state] = true);
            }
        }
    }

    return result;
}

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        string board;
        cin >> board;
        int mask = 0;
        int dump = 1;
        rep(0, board.size()) board[i] == 'o' ? SetBit(mask, 11 - i) : dump = 1;

        cout << solve(mask) << endl;

        // cout << " END " << endl;
    }
}
