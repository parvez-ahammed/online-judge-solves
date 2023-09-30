#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"

int N, K, P;

vector<int> cost;
vector<vector<int>> value;
map<int, int> memo;
int ans = LLONG_MAX;

int hashF(string state)
{
    // generate hash function

    int hash = 0;
    int p = 1;
    int mod = 1e9 + 7;

    for (int i = 0; i < N; i++) {
        hash = (hash + (state[i] - '0') * p) % mod;
        p = (p * 2) % mod;
    }

    return hash;
}

void solve(string &state, vector<int>& situation, int currCost)
{
    int stateHash = hashF(state);
    if (memo.count(stateHash) != 0) {
        return;
    }

    bool conditionMet = true;

    for (int i = 0; i < K; i++) {
        if (situation[i] < P) {
            conditionMet = false;
        }
    }

    if (conditionMet) {

        memo[stateHash] = currCost;
        ans = min(ans, currCost);
        return;
    }
    memo[stateHash] = -1;

    if (currCost >= ans) {
        return;
    }

    for (int i = 0; i < N; i++) {
        string tempState = state;

        if (tempState[i] == '0') {

            tempState[i] = '1';
            int tempCost = currCost + cost[i];

            vector<int> tempSit = situation;
            for (int j = 0; j < K; j++) {
                tempSit[j] += value[i][j];
            }

            solve(tempState, tempSit, tempCost);
        }
    }
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> K >> P;

    cost.resize(N);
    value = vector<vector<int>>(N, vector<int>(K));

    for (int i = 0; i < N; i++) {
        cin >> cost[i];
        for (int j = 0; j < K; j++) {
            cin >> value[i][j];
        }
    }

    string state = "";

    for (int i = 0; i < N; i++) {
        state += '0';
    }

    for (int j = 0; j < K; j++) {
        int sum = 0;
        for (int i = 0; i < N; i++) {
            sum += value[i][j];
        }

        if (sum < P) {
            cout << -1 << endl;
            return 0;
        }
    }

    vector<int> situation(K, 0);
    solve(state, situation, 0);

    cout << ans << endl;

    // cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;

    return 0;
}