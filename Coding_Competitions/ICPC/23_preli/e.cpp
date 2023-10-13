#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"

struct DS {

    set<int> s;

    void insert(int x)
    {
        s.insert(x);
    }

    void remove(int x)
    {
        s.erase(x);
    }

    int size()
    {
        return s.size();
    }

    void print()
    {
        for (auto x : s) {
            cout << x << " ";
        }
        cout << endl;
    }

    void clear()
    {
        s.clear();
    }
};

void solve()
{

    int n;
    cin >> n;

    DS ds;

    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    // print the array v
    int cnt = 0;

    int r = 1;
    //cout << endl;
    for (int l = 1; l <= n; l++) {

        while (r <= n) {

            ds.insert(v[r]);

            if (ds.size() > 1) {
                ds.remove(v[r]);
                break;
            }

            r++;
        }

        //cout << "L " << l << " R " << r  << endl;

        //ds.print();

        if (r - l >= 0) {

            int temp = r - l;
            cnt += (temp * (temp + 1)) / 2;
        }
        l = r - 1;

        ds.clear();
    }

    //cout << "cnt " << cnt << endl;

    int total = (n * (n + 1)) / 2;

    cout << total - cnt << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        cout << "Case " << i << ": ";
        solve();
    }
    return 0;
}