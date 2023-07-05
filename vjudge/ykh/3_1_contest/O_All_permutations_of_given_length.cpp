#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string base = "";
    for (int i = 0; i < n; i++)
    {
        base += char('1' + i);
    }
  

    int fact = 1;

    for (int i = 1; i <= n; i++)
        fact *= i;
    

    while (fact--)
    {
        cout << base << endl;
        next_permutation(base.begin(), base.end());
    }
    return 0;
}