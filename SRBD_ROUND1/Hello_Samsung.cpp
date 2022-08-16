#include <bits/stdc++.h>
using namespace std;

bool LCS(string t, string s)
{
    if (s == t)
        return true;
    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (t[j] == s[i])
            j++;
        if (j == t.size())
            return true;
    }
    return false;
}

int main()
{
    
    string S = "Samsung", T;

    getline(cin, T);
    if (LCS(S, T))
        cout << "SRBD" << endl;
    else
        cout << "GHOST" << endl;
}