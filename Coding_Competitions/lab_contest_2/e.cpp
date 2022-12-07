#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;
    long long int first = 1;
    cout << first << " ";
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        long long int second = (first * (n - i + 1)) / i;
        if (count != n)
            cout << second << " ";
        else
            cout << second;
        first = second;
        count++;
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    int count = 1;
    for (int i = 1; i <= tc; i++)
    {

        if (count != tc)
        {
            solve();
            cout << endl;
        }
        else
            solve();
        count++;
    }

    return 0;
}