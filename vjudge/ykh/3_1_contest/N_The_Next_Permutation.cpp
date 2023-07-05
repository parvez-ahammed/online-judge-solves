#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

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
        //cout << s << endl;
        cout << n << " ";
        if (p == s)
        {
            cout << "BIGGEST" << endl;
        }
        else
        {
            next_permutation(p.begin(), p.end());
            cout << p << endl;
        }
    }

    return 0;
}