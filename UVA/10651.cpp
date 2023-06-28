// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1592
// https://www.udebug.com/UVa/10651

#include <bits/stdc++.h>
using namespace std;

#define rep(start, x) for (int i = start; i < x; i++)

int solve(string src)
{
    int result = INT_MAX;

    queue<string> q;
    map<string, bool> visited;

    q.push(src);
    visited[src] += 1;

    while (!q.empty())
    {
        string str = q.front();
        q.pop();

        int countp = count(str.begin(), str.end(), 'o');

        result = min(result, countp);
        if (result == 1)
            return 1;

        string state;

        rep(0, str.size() - 2)
        {

            if (str[i] == '-' && str[i + 1] == 'o' && str[i + 2] == 'o')
            {
                state = str;

                state[i + 1] = state[i + 2] = '-';
                state[i] = 'o';

                if (visited[state] == 0)
                    (q.push(state), visited[state] += 1);
            }

            if (str[i] == 'o' && str[i + 1] == 'o' && str[i + 2] == '-')
            {
                state = str;

                state[i + 1] = state[i] = '-';
                state[i + 2] = 'o';
                
                if (visited[state] == 0)
                    (q.push(state), visited[state] += 1);
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
        cout << solve(board) << endl;
    }
}
