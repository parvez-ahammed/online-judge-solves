#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        string res = "";
        set<string> s;

        res = str[0];
        int l = 0;
        int mx = 0;
        int len = 1;

        for (int i = 1; i < n; i++)
        {
            if (str[i - 1] != str[i])
            {
                if (mx < len)
                {
                    mx = len;
                    mx--;
                }
             
                if (s.find(res) != s.end())
                    l = max(l, len);
                s.insert(res);
                res = str[i];
                len = 1;
            }
            else
            {
                len++;
                res += str[i];
            }
        }
        if (s.find(res) != s.end())
        {
            l = max(l, len);
        }
        else
        {
            if (mx < len)
            {
                mx = len;
                mx--;
            }
        }
        int ans = max(l, mx);
        cout << ans << endl;
    }

    return 0;
}
