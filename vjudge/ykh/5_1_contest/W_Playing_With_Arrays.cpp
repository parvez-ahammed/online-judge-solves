#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

void testOutput(deque<int> a)
{
    while (!a.empty()) {
        cout << a.front() << " ";
        a.pop_front();

        a.push_back(a.front());
        a.pop_front();
    }

    cout << endl;
}

void solve()
{
    int n;
    cin >> n;

    int val = n;
    deque<int> a;

    while (val > 0) {

        if (!a.empty()) {
            int val = a.back();
            a.pop_back();
            a.push_front(val);
        }

        a.push_front(val);
        --val;
    }

    for (int i = 0; i < n; ++i) {

        cout << a[i];
        if (i != n - 1)
            cout << " ";
    }

    cout << endl;

    // testOutput(a);
}

int32_t main()
{

    FAST;
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
