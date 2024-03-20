#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int N;
int clockDist(int a, int b)
{
    int val = (a + b) % N;
    return (val == 0 ? N : val);
}
int antiClockDist(int a, int b)
{
    int val = (a - b + N) % N;
    return (val == 0 ? N : val);
}

void printAns(set<int> s)
{

    cout << s.size() << endl;
    for (auto i : s) {
        cout << i << " ";
    }
    cout << endl;
}

void solve()
{
    int n, m, x;
    cin >> n >> m >> x;
    N = n;

    set<int> s;

    s.insert(x);

    for (int i = 0; i < m; i++) {
        int r;
        char c;
        cin >> r >> c;

        if (c == '0') {
            set<int> temp;
            while (!s.empty()) {

                temp.insert(clockDist(*s.begin(), r));
                s.erase(s.begin());
            }
            s = temp;
        }

        if (c == '1') {
            set<int> temp;
            while (!s.empty()) {
                temp.insert(antiClockDist(*s.begin(), r));
                s.erase(s.begin());
            }
            s = temp;
        }

        if (c == '?') {
            set<int> temp;
            while (!s.empty()) {
                temp.insert(clockDist(*s.begin(), r));
                temp.insert(antiClockDist(*s.begin(), r));
                s.erase(s.begin());
            }
            s = temp;
        }
    }

    printAns(s);
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