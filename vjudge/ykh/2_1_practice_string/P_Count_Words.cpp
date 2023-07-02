#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    getline(cin, s);

    int space = 0;
    s += ' ';

    for (int i = 0; i < s.size();)
    {
        if (s[i] == '!' || s[i] == '.' || s[i] == '?' || s[i] == ',')
            s.erase(s.begin() + i);
        else if (i > 0)
        {
            if (s[i] == s[i - 1] && s[i] == ' ')
                s.erase(s.begin() + i);
            else
                i++;
        }
        else
            i++;
    }

    bool has_alpha = false;

    while (s.size() > 1)
    {

        if (s[0] == ' ')
            s.erase(s.begin());
        else
            break;
    }
     cout << s << endl;

    for (int i = 0; i < s.size(); i++)
        if (s[i] == ' ')
            space++;

    if (space == s.size())
        cout << 0 << endl;
    else
        cout << space << endl;

    return 0;
}