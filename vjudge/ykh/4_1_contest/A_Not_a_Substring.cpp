#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

void type1(int n)
{

    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
        cout << "()";

    cout << endl;
}

void type2(int n)
{
    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
        cout << "(";
    for (int i = 0; i < n; i++)
        cout << ")";

    cout << endl;
}

void solve()
{
    string str;
    cin >> str;
    int n = str.size();

    if (str == "()")
    {
        cout << "NO" << endl;
        return;
    }

    type1(1);

    // ()()
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