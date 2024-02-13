#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int countZero(int x)
{
    int cnt = 0;
    while (x % 10 == 0) {
        cnt++;
        x /= 10;
    }
    return cnt;
}

int getZeroOmmited(int x)
{
    string s = to_string(x);
    reverse(s.begin(), s.end());
    int ommitedZero = stoi(s);
    return ommitedZero;
}
void solve()
{

    int n, m;

    cin >> n >> m;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int cnt = 0;

    priority_queue<pair<int, int>> pq , pq2;
    
    for (int i = 0; i < n; i++) {
        if (a[i] % 10 == 0) {
            int zeroCnt = countZero(a[i]);
            pq.push({ zeroCnt, a[i] });
        } else {
            pq2.push({ 0, a[i] });
        }
    }

    // print the priority queue

    priority_queue<pair<int, string>> ans;

    while (!pq.empty()) {
        int val = pq.top().second;
        pq.pop();
        if (pq.top().first != 0) {
            int ommitedZero = getZeroOmmited(val);
            pq2.push({ 0, ommitedZero });

            if (pq.size() >= 1 and pq2.size() >= 1){
                auto firstVal = pq.top();
                pq.pop();
                auto secondVal = pq2.top();
                pq2.pop();
                int zeroOmmitSecond = getZeroOmmited(secondVal.second);


                string s = to_string(firstVal.second) + to_string(zeroOmmitSecond);
                ans.push({ 0, s });
            }
        } else {
            ans.push({ 0, to_string(val) });
        }
    }

    while (!pq2.empty()) {
        ans.push({ 0, to_string(pq2.top().second) });
        pq2.pop();
    }

    string finalAns = "";

    while (!ans.empty()) {
       //cout << ans.top().second << " ";
        finalAns += ans.top().second;
        ans.pop();
    }

    if (finalAns.size() > m) {
        cout << "Sasha" << endl;
    } else {
        cout << "Anna" << endl;
    }
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