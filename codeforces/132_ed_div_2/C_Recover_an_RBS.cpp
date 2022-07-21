#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        string str;
        cin >> str;
        int count_op = count(str.begin(), str.end(), '(');
        int coung_cls = count(str.begin(), str.end(), ')');
        int count_q = count(str.begin(), str.end(), '?');

        int sum = count_op + coung_cls + count_q;

        //cout << count_op << coung_cls << count_q << endl;

        if (sum % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}