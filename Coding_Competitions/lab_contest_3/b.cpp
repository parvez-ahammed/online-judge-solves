#include <bits/stdc++.h>
using namespace std;

void solve()
{
    priority_queue<pair<int, string>> pq;
    int n;
    cin >> n;
    string str;
    int power;
    while (n--)
    {
        cin >> str >> power;
        pq.push(make_pair(power, str));
    }

    while (!pq.empty())
    {
        cout << pq.top().second << endl;
        pq.pop();
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}