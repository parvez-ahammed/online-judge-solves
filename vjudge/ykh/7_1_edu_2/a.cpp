#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

struct DS {

    map<int, int> mp;

    void insert(ll x)
    {
        mp[x]++;
    }

    void erase(ll x)
    {
        mp[x]--;
        if (mp[x] == 0) {
            mp.erase(x);
        }
    }

    int unique()
    {
        return mp.size();
    }

    void print()
    {
        for (auto x : mp) {
            cout << x.first << " " << x.second << endl;
        }
        cout << endl;
    }

} ds;
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Hello World!"<< endl;
    }


    return 0;
}