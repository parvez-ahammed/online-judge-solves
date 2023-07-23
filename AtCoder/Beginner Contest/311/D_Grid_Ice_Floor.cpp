#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define llu unsigned long long int
#define Sort(x) sort(x.begin(), x.end())
#define SortR(x) sort(x.begin(), x.end(), greater<int>())
#define Reverse(x) reverse(x.begin(), x.end())
#define sq(x) (x) * (x)
#define mid(l, r) (l + (r - l) / 2)
#define binary_of(x) (bitset<32>(x).to_string().substr(32 - log2(x)))
int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};
#define BIG_MOD 1000000007
#define vi vector<int>
#define vll vector<ll>
#define rep(start, x) for (int i = start; i < x; i++)
#define pi pair<int, int>

int N;
int M;
string graph[205];
map<pair<int, int>, bool> visited;

pi rightEnd(int row, int col)
{
    pi res = {row, col};

    for (int i = col; i < M; i++)
    {
        if (graph[row][i] == '#')
            break;
        graph[row][i] = '-';
        res = {row, i};
    }

    return res;
}

auto leftEnd(int row, int col)
{
    pi res = {row, col};

    for (int i = col; i >= 0; i--)
    {
        if (graph[row][i] == '#')
            break;
        graph[row][i] = '-';
        res = {row, i};
    }

    return res;
}

auto downEnd(int row, int col)
{
    pair<int, int> res = {row, col};

    for (int i = row; i < N; i++)
    {
        if (graph[i][col] == '#')
            break;
        graph[i][col] = '-';
        res = {i, col};
    }

    return res;
}

auto upEnd(int row, int col)
{
    pair<int, int> res = {row, col};

    for (int i = row; i >= 0; i--)
    {
        if (graph[i][col] == '#')
            break;
        graph[i][col] = '-';
        res = {i, col};
    }

    return res;
}

void solve()
{

    cin >> N >> M;
    rep(0, N) cin >> graph[i];

    stack<pair<int, int>> s;

    s.push({1, 1});
    graph[1][1] = '-';
    visited[{1, 1}] = true;

    while (!s.empty())
    {
        auto source = s.top();
        s.pop();

        for (int i = 0; i < 4; i++)
        {
            pi restPoint = source;
            switch (i)
            {
            case 0:
                restPoint = rightEnd(source.first, source.second);
                break;
            case 1:
                restPoint = downEnd(source.first, source.second);
                break;
            case 2:
                restPoint = leftEnd(source.first, source.second);
                break;
            case 3:
                restPoint = upEnd(source.first, source.second);
                break;

            default:
                break;
            }

            if (restPoint != source && !visited[restPoint])

            {
                visited[restPoint] = true;
                s.push(restPoint);
            }
        }
    }

    int cnt = 0;
    for (int i = 0; i < N; i++)
        cnt += count(graph[i].begin(), graph[i].end(), '-');

    cout << cnt << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}