#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

string type1 = "", type2 = "", type3 = "";
int n;

void makeType1()
{
    for (int i = 0; i < n; i++)
    {
        type1 += '(';
    }
    for (int i = 0; i < n; i++)
    {
        type1 += ')';
    }
}

void makeType2()
{
    for (int i = 0; i < n; i++)
        type2 += "()";
    
}

void makeType3()
{
    for (int i = 0; i < n / 2; i++)
    {
        type3 += "()";
    }

    for (int i = 0; i < n / 2; i++)
    {
        type3 += '(';
    }
    for (int i = 0; i < n / 2; i++)
    {
        type3 += ')';
    }
}

void solve()
{
    string s;
    cin >> s;
    n = s.size() ;
    type2 = type3 = type1 = "";
    

    makeType1();
    makeType2();
    makeType3();

    if (type1.find(s) == string::npos)
    {
        cout << "YES\n"
             << type1 << endl;
        return;
    }

    if (type2.find(s) == string::npos)
    {
        cout << "YES\n"
             << type2 << endl;
        return;
    }

    if (type3.find(s) == string::npos)
    {
        cout << "YES\n"
             << type3 << endl;
        return;
    }

    cout << "NO" << endl;
}
int32_t main()
{

    FAST;
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}