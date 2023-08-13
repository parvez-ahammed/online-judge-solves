#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

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

        bool possible = next_permutation(p.begin(), p.end());

        cout << n << " ";
        if (!possible)
            p = "BIGGEST";

        cout << p << endl;
    }

    return 0;
}