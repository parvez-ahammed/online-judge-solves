#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int getMovie(priority_queue<pair<int, int>>& pq, int x, int y)
{
    priority_queue<pair<int, int>> temp;
    while (!pq.empty()) {
        auto [val, idx] = pq.top();
        if (idx != x && idx != y) {

            while (!temp.empty()) {
                pq.push(temp.top());
                temp.pop();
            }
            return val;
        }
        temp.push(pq.top());
        pq.pop();
    }
    return 0;
}

pair<int, int> getBoard(priority_queue<pair<int, int>>& pq, int x)
{
    priority_queue<pair<int, int>> temp;
    while (!pq.empty()) {
        auto [val, idx] = pq.top();
        if (idx != x) {
            while (!temp.empty()) {
                pq.push(temp.top());
                temp.pop();
            }
            return { val, idx };
        }
        temp.push(pq.top());
        pq.pop();
    }
    return { 0, 0 };
}

void solve()
{
    int n;
    cin >> n;

    vector<int> ski_0(n + 1), board_0(n + 1), movie_0(n + 1);
    priority_queue<pair<int, int>> moviePq;
    priority_queue<pair<int, int>> boardPq;

    for (int i = 1; i <= n; i++) {
        cin >> ski_0[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> board_0[i];
        boardPq.push({ board_0[i], i });
    }
    for (int i = 1; i <= n; i++) {
        cin >> movie_0[i];
        moviePq.push({ movie_0[i], i });
    }

    int ans = 0;

    for (int i = 1; i <= n; i++) {
        int ski = ski_0[i];
        int x = i;

        int firstWay = ski, secondWay = ski;

        pair<int, int> board = getBoard(boardPq, x);
        int y = board.second;
        int movie = getMovie(moviePq, x, y);
        firstWay += board.first + movie;

        pair<int, int> movie2 = getBoard(moviePq, x);
        int y2 = movie2.second;
        int board2 = getMovie(boardPq, x, y2);
        secondWay += movie2.first + board2;

        ans = max(ans, firstWay);
        ans = max(ans, secondWay);
    }

    cout << ans << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}