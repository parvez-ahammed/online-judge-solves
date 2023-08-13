#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int arr[15][15];
int N, M;
ll maxSum;

void findSum(int i, int j, ll sum)
{
    ll currSum = sum + arr[i][j];
    if (i == N and j == M)
    {
        maxSum = max(currSum, maxSum);
        return;
    }

    if (i < N)
        findSum(i + 1, j, currSum);

    if (j < M)
        findSum(i, j + 1, currSum);
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            cin >> arr[i][j];
        }
    }
    maxSum = LLONG_MIN;
    findSum(1, 1, 0);

    cout << maxSum << endl;

    return 0;
}