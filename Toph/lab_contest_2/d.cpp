#include <bits/stdc++.h>
using namespace std;

bool solve(string str1, string str2, int str1_size, int str2_size)
{
    if (str1_size == 0)
        return true;
    if (str2_size == 0)
        return false;
    if (str1[str1_size - 1] == str2[str2_size - 1])
        return solve(str1, str2, str1_size - 1, str2_size - 1);
    return solve(str1, str2, str1_size, str2_size - 1);
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;

    int len = 0;
    cin >> len;

    string str1;
    cin >> str1;

    cin >> tc;
    while (tc--)
    {
        string str2;
        cin >> str2;

        if (solve(str2, str1, str2.size(), str1.size()))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}