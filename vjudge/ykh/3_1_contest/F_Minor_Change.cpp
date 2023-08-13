#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;

    int cnt = 0;
    rep(0, s.size()) cnt+= (s[i] != t[i]);

    cout << cnt << endl;
    return 0;
}