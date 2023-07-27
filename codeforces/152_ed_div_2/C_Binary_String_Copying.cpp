#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"

void solve()
{
    int n, m;
    cin >> n >> m;
    string str;
    cin >> str;

    set<string> s;
    string temp;
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        --l;

        temp = str;

        sort(temp.begin() + l, temp.begin() + r);
        s.insert(temp);
    }

    cout << s.size() << endl;
}

int32_t main()
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