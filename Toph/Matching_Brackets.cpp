#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    stack<char> bras;
    if (str.size() == 1)
    {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] == '[' || str[i] == '(' || str[i] == '{')
            bras.push(str[i]);

        else
        {
            if (bras.empty())
            {
                cout << "No" << endl;
                return 0;
            }
            else if (bras.top() == '(' && str[i] == ')')
                bras.pop();
            else if (bras.top() == '{' && str[i] == '}')
                bras.pop();
            else if (bras.top() == '[' && str[i] == ']')
                bras.pop();
        }
    }
    if (bras.empty())
    {
        cout << "Yes" << endl;
        return 0;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}