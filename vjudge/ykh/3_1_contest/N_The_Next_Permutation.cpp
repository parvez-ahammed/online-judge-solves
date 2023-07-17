#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int32_t main()
{

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string p = s;

        sort(s.begin(), s.end());
        reverse(s.begin(), s.end());
        
        cout << n << " ";
        if (p == s)
            p = "BIGGEST";
        else
            next_permutation(p.begin(), p.end());

        cout << p << endl;
    }

    return 0;
}