#include <bits/stdc++.h>
using namespace std;

void solve()
{

    string str;
    while (cin >> str)
    {
        int count = 0;
        int up = 0;
        int low = 0;
        int digit = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (islower(str[i]))
            {
                low = 1;
            }
            else if (isupper(str[i]))
            {
                up = 1;
            }
            else
            {
                digit = 1;
            }

            if (up == 1 && low == 1 && digit == 1)
            {
                count++;
                up = 0;
                low = 0;
                digit = 0;
            }
        }
        cout << count << "\n";
    }
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