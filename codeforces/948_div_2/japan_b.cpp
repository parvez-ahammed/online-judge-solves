#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 6;

vector<vector<int>> board(N, vector<int>(3, -1));
unordered_map<int, pair<int, int>> cardPositions;

void adjustBoardSize(int r, int c)
{
    board.resize(r + 300, vector<int>(c + 300, -1));
}

void moveCardDown(int row, int col, int N)
{
    if (row + 1 >= N || board[row + 1][col] == -1) {

        board[row + 1][col] = board[row][col];
        cardPositions[board[row][col]] = { row + 1, col };
    } else {
        moveCardDown(++row, col, N);
        board[row + 1][col] = board[row][col];
        cardPositions[board[row][col]] = { row + 1, col };
    }
    board[row][col] = -1;
}

void processMoves(const vector<vector<int>>& moves)
{
    for (const auto& move : moves) {

        int cardId = move[0], srcRow = move[1], srcCol = move[2], destRow = move[3], destCol = move[4];

        board[srcRow][srcCol] = -1;
        if (board[destRow][destCol] != -1) {
            moveCardDown(destRow, destCol, board.size());
        }
        board[destRow][destCol] = cardId;
        cardPositions[cardId] = { destRow, destCol };
    }
}
vector<int> solution(vector<vector<int>>& cards, vector<vector<int>>& moves, int query)
{

    for (auto& card : cards) {
        int id = card[0], row = card[1], col = card[2];
        board[row][col] = id;
        cardPositions[id] = { row, col };
    }
    int n = cards.size();
    adjustBoardSize(n, 3);

    processMoves(moves);
    auto [row, col] = cardPositions[query];
    cout << row << " " << col << endl;
    return { row, col };
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    vector<vector<int>> cards = { { 1, 1, 0 }, { 3, 0, 0 }, { 6, 0, 1 }, { 4, 0, 2 }, { 5, 2, 0 }, { 7, 1, 1 }, { 2, 1, 2 } };
    vector<vector<int>> moves = {{ 4, 0, 2, 1, 1 }, { 7, 2, 1, 0, 2 }, { 1, 0, 1, 2, 1 }, { 5, 2, 0, 0, 1 }, { 3, 0, 0, 1, 1 }, { 2, 0, 2, 1, 0 }, { 6, 1, 1, 2, 1 }
    };
    int query = 4;

    for (int t = 1; t <= tc; ++t) {
        solution(cards, moves, query);
    }
    return 0;
}