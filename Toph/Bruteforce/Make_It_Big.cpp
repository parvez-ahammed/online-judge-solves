#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

void swapString(string str, set<string> &v)
{
    string temp;
    int n = str.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            temp = str;
            if (i != j)
            {
                swap(temp[i], temp[j]);
                v.insert(temp);
            }
        }
    }
}

void solve()
{
    string str;
    cin >> str;

    set<string> v, vv;
    swapString(str, v);
    int n = v.size();

    for (auto s : v)
        swapString(s, vv);

    cout << *--vv.end() << endl;
}
int32_t main()
{

    FAST;
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}