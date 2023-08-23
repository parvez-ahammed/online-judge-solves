#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

int32_t main()
{

    FAST;
    string str;
    cin >> str;
    stack<char> s;

    int n = str.size();
    for (int i = 0; i < n; i++)
    {

        if (s.empty())
        {
            s.push(str[i]);
            continue;
        }

        if (str[i] == ')' and s.top() == '(')
            s.pop();
        else
            s.push(str[i]);
    }

    cout << n - s.size() << endl;

    return 0;
}
