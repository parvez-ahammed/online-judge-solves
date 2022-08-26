#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, i, j;
    cin >> n;
    string s[n];
    int len = 0;
    int max_len = 0;
    for (i = 0; i < n; i++)
        cin >> s[i],len = s[i].size(), max_len = max(max_len, len);
    for (i = 0; i < n; i++)
    {
        int len = s[i].size() - 1;

        if (len % 2 == 1)
        {
            if (len - 1 == 0)
                len += 1;
            else
                len -= 1;
        }
        for (j = 0; j < (max_len - len - 1) / 2; j++)
            cout << " ";
        cout << "b";
        for (j = 0; j < len; j++)
            cout << "a";
        cout << endl;
    }
}