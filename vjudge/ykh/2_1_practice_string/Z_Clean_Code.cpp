#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    stack<char> st;

    while (getline(cin, s))
    {

        string line = "";
        for (int i = 0; i < s.size(); i++)
        {

            if (i + 1 < s.size())
            {
                if (s[i] == s[i + 1] && s[i] == '/' && st.empty())
                {
                    break;
                }

                if (s[i + 1] == '*' && s[i] == '/')
                {
                    st.push('/'), st.push('*');
                }
            }

            if (i - 1 >= 0)
            {
                if (s[i - 1] == '*' && s[i] == '/' && st.size() >= 2)
                {

                    while (!st.empty())
                        st.pop();

                    continue;
                }
            }

            if (st.empty())
            {
                line += s[i];
            }
        }

        if (line.size() != 0 && count(line.begin(), line.end(), ' ') != line.size())
        {
            cout << line << endl;
        }
    }
}
