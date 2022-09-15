#include <bits/stdc++.h>
using namespace std;

void solve()
{

    string str;
    cin >> str;

    stack<char> st;

    int break_pos = 0;

    for (int i = 0; i < str.size(); i++)
    {
        break_pos = i;
        if (str[i] == '(')
            st.push(str[i]);
        else if (st.size() == 0)
        {
            break_pos = i;
            break;
        }

        else
            st.pop();
    }

    //cout << str.size() << break_pos << endl;

    if (st.size() == 0 && break_pos == str.size() - 1)
        cout << "Yes"
             << "\n";
    else
        cout << "No"
             << "\n";
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}