#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
#define Reverse(x) reverse(x.begin(), x.end())
void solve()
{

    string str;

    stack<string> back_s, for_s, empty;

    string current = "http://www.lightoj.com/";

    while (cin >> str)
    {
        // cout << str << " ";
        if (str == "QUIT")
            break;
        if (str == "VISIT")
        {
            back_s.push(current);
            cin >> current;
            for_s = empty;
            cout << current << endl;
        }

        if (str == "BACK")
        {
            if (back_s.empty())
            {
                cout << "Ignored" << endl;
            }
            else
            {
                for_s.push(current);
                current = back_s.top();
                back_s.pop();
                cout << current << endl;
            }
        }

        if (str == "FORWARD")
        {
            if (for_s.empty())
            {
                cout << "Ignored" << endl;
            }
            else
            {
                back_s.push(current);
                current = for_s.top();
                for_s.pop();
                cout << current << endl;
            }
        }
    }
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    int i = 1;
    cin >> tc;
    while (tc--)
    {
        cout << "Case " << i++ << ": " << endl;
        solve();
    }
    return 0;
}
