#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

int n, m, q;

vector<string> v(1100);

int fullCol = 0;
int fullRow = 0;

int getCurrentNeededMove()
{
    int cnt = 0;

    for (int i = 1; i <= n; i++)
        cnt += count(v[i].begin(), v[i].end(), '*');

    int colNeeded = cnt / n;

    int inPlace = 0;

    for (int i = 0; i < colNeeded; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            inPlace += (v[j][i] == '*');
        }
    }

    int rowNeeded = cnt % n;

    fullCol = colNeeded;
    fullRow = rowNeeded;

    cout << endl;

    for (int i = 1; i <= rowNeeded; i++)
    {
        inPlace += (v[i][colNeeded] == '*');
    }

    return cnt - inPlace;
}
void solve()
{

    cin >> n >> m >> q;

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    int current_needed_move = getCurrentNeededMove();

    for (int i = 0; i < q; i++)
    {
        int r, c;
        cin >> r >> c;
        --c;
        cout << v[r][c] << " " << fullCol << "" << fullRow << endl;

        if (c<fullCol or (c==fullCol and r<=fullRow + 1))
            cout << "IN RANGE" << endl;
        else
            cout << "OUT RANGE" << endl;
    }

    cout << current_needed_move << endl;
}

int32_t main()
{
    solve();
    FAST;
    return 0;
}