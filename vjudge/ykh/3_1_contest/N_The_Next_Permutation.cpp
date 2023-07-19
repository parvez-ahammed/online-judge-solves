#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        string s;
        cin >> n >> s;

        string p = s;

        sort(s.begin(), s.end());
        reverse(s.begin(), s.end());

        cout << n << " ";
        if (p == s)     p = "BIGGEST";
        else            next_permutation(p.begin(), p.end());

        cout << p << endl;
    }

    return 0;
}