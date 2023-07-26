#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n < 4)
        cout << -1 << endl;
    else
    {

        vector<int> odds, evens;

        for (int i = 3; i <= n; i++)
            i & 1 ? odds.push_back(i)
                  : evens.push_back(i);

        sort(odds.begin(), odds.end(), greater<int>());
       

        for (int i = 0; i < odds.size(); i++)
            cout << odds[i] << " ";

        cout << 1 << " " << 4  << " " << 2 << " ";

        for (int i = 1; i < evens.size(); i++)
            cout << evens[i] << " ";

        cout << endl;
    }
}
int main()
{
    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        solve();
    }
}