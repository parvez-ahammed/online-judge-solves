#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
set<string> se;

void processString(string s)
{
    string ans = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]))
            ans += tolower(s[i]);
        else
            se.insert(ans), ans = "";
    }

    se.insert(ans);
}

int main()
{

    string x;

    while (cin >> x)
        processString(x);

    for (auto x : se)
        if (x != "")
            cout << x << '\n';

    return 0;
}
